#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool power_of_two(ll n){
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(power_of_two(n)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}

//Funciono