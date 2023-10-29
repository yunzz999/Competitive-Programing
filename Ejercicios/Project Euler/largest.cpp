#include <bits/stdc++.h>
using namespace std;

bool primo(int n){
    for(int i=3;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



int main(){
    int number ;
    cin>>number;
    int mayor=0;
    vector<int> primes {2,3};
    for(int i=10000000000;i<number;i++){
        if(primo(i)){
            primes.push_back(i);
        }
    }

    for(int i = primes.size()-1;i>0;i--){
        if(number%i==0){
            cout<<i<<endl;
            return i;
        }
    }
}