#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool isPrime(ll n){
    ll raiz = sqrt(n);

    if(n%2==0){
        return false;
    }

    for(int i=3;i<raiz;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void sieve(ll upperbound){
    
}


int main(){

}