#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(ll i =0;i<n;i++){
        cin>>v[i];
    }
    ll sol=0;
    ll i=1;
    while(i<n+1){
        if(v[i]<v[i-1]){ 
            sol+=v[i-1]-v[i];
            v[i]+=v[i-1]-v[i];
        }
        else{
            i++;
        }
    }
    cout<<sol<<endl;

}