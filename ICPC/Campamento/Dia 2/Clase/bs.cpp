#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_square(ll n){
    ll p=1;
    while(pow(p,2)<n){
        p++;
    }
    if(pow(p,2)==n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){              //O(t)
        ll n,temp;
        cin>>n;
        ll suma=0;
        for(ll i=0;i<n;i++){ //O(t*n)
            cin>>temp;
            suma+=temp;
        }
        if(is_square(suma)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}