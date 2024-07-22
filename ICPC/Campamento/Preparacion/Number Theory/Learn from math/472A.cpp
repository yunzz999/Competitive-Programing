#include <bits/stdc++.h>
using namespace std;


// PRIMES FUNCTION
bool comp(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    for(int i=4;i<n;i++){
        if(comp(i) and comp(n-i)){
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
}

// se podria mejorar tiempo de complejidad
