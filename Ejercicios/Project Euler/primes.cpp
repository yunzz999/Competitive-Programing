#include <bits/stdc++.h>
using namespace std;

bool primo(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n = 1001;
    long long count = 6;
    cin>>n;
    vector<long long> primes {2,3,5};

    while(primes.size()<n){
        if(primo(count)){
            primes.push_back(count);
            cout<<primes.size();
        }
        count++;
    }

    cout<<primes[primes.size()-1]<<endl;
}
