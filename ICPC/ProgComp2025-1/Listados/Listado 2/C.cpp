#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int exp_mod(int a, int b, int mod) {
    if (b == 0) return 1;
    long long c = exp_mod(a, b / 2, mod);
    c = (c * c) % mod;
    if (b % 2 == 1) c = (c * a) % mod;
    return c;
}

int main() {
    int n;
    cin >> n;
    
    long long num = 1;   // Número de divisores (d(n))
    long long sum = 1;    // Suma de divisores (σ(n))
    long long a = 1;      // El número original (n)
    
    for (int i = 0; i < n; i++) {
        int p, e;  // p = factor primo, e = exponente
        cin >> p >> e;
        
        // Calcular n = producto de p^e
        a = (a * exp_mod(p, e, M)) % M;
        
        // Calcular número de divisores: d(n) = producto (e_i + 1)
        num = (num * (e + 1)) % M;
        
        // Calcular suma de divisores: σ(n) = producto ( (p^(e+1) - 1)/(p - 1) )
        long long numerator = (exp_mod(p, e + 1, M) - 1 + M) % M;
        long long denominator = (p - 1);
        long long inv_denominator = exp_mod(denominator, M - 2, M);  // Inverso modular
        long long term = (numerator * inv_denominator) % M;
        sum = (sum * term) % M;
    }
    
    // Multiplicación de divisores: n^(d(n)/2) mod M
    long long product_of_divisors;
    if (num % 2 == 0) {
        product_of_divisors = exp_mod(a, num / 2, M);
    } else {
        // Si d(n) es impar (n es un cuadrado perfecto), multiplicamos por sqrt(n)
        long long sqrt_n = 1;
        for (int i = 0; i < n; i++) {
            int p, e;
            cin >> p >> e;  // Necesitamos recalcular los factores para sqrt(n)
            sqrt_n = (sqrt_n * exp_mod(p, e / 2, M)) % M;
        }
        product_of_divisors = (exp_mod(a, (num - 1) / 2, M) * sqrt_n) % M;
    }
    
    cout << "Número original (n): " << a << endl;
    cout << "Número de divisores (d(n)): " << num << endl;
    cout << "Suma de divisores (σ(n)): " << sum << endl;
    cout << "Multiplicación de divisores: " << product_of_divisors << endl;
    
    return 0;
}