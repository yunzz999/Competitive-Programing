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


ll _sieve_size;
bitset<10000010> bs; 
vector <int> primes;

void sieve(ll upperbound){
    _sieve_size=upperbound;
    bs.reset(); bs.flip();
    bs.set(0,false); bs.set(1,false);
    for(ll i = 2;i<=_sieve_size;i++)if(bs.test((size_t)i)){
        for(ll j = i*i;j<=_sieve_size;j+=i)bs.set((size_t)j,false);
        primes.push_back((int)i);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(10);

    //xd

    return 0;
}