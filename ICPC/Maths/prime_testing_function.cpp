#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep_(i,k,n) for for(int i=k;i<n;i++)




bool isPrime(ll n){
    ll raiz = sqrt(n)+1;
    if(n%2==0 and n!=2){
        return false;
    }

    for(int i=3;i<raiz;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


//Funcion para la lista obtener la lista de numeros primos menores a N

vector<int> sieve(int upperbound){
   
    int _sieve_size=upperbound;
    bitset<10000010> bs; 
    vector <int> primes;

    bs.reset(); bs.flip();
    bs.set(0,false); bs.set(1,false);
    for(ll i = 2;i<=_sieve_size;i++)if(bs.test((size_t)i)){
        for(ll j = i*i;j<=_sieve_size;j+=i)bs.set((size_t)j,false);
        primes.push_back((int)i);
    }
    return primes;
}


//Funcion para obtener los divisores primos de un Numero N

vector <int> primeFactors (int N){
    vector<int> factors;
    vector<int> primes=sieve(N);
    int PF_idx=0;
    int PF=primes[PF_idx];

    while(N!=1 && (PF*PF<=N)){
        while(N%PF==0){
            N/=PF;
            factors.push_back(PF);
        }
        PF=primes[++PF_idx];
    }

    if(N!=1){
        factors.push_back(N);
    }
    return factors;
}


//Greatest common divisor

int gcd(int a, int b) { //basado en el algoritmo de euclides
    return (b == 0 ? a : gcd(b, a % b));
}

//tambien existe la funcion nativa gcd(int a , int b)


//Lowest common multiple

int lcm(int a, int b) {
    return (a * (b / gcd(a, b)));
}


//Euler phi Function

//Primos relativos , 2 numeros son relativamente primos si
// gcd(a,b) = 1

int EulerPhi (int N) {
vector <int> factors = primeFactors(N);
vector<int>::iterator new_end = unique(factors.begin(), factors.end()); // get unique
int result = N;
for (vector<int>::iterator i = factors.begin(); i != new_end; i++)
    result = result - result / *i;
    return result;
}


//Funcion Factorial

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(10);

    return 0;
}