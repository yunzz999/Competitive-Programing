#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep_(i, k, n) for (int i = k; i < n; ++i)
typedef long long ll;


//Greatest common divisor

int gcd(int a, int b) { //basado en el algoritmo de euclides
    return (b == 0 ? a : gcd(b, a % b));
}

//tambien existe la funcion nativa gcd(int a , int b)


//Lowest common multiple

int lcm(int a, int b) {
    return (a * (b / gcd(a, b)));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(10);
  
}