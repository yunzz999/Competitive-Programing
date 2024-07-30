#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll gcd(ll a,ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll mcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}

int main(){
    ll n,c,g;
    cin>>n>>c>>g;
    ll x=mcm(c,g);
    if(n>=max(x/c,x/g)){
        cout<<"SI"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


// a*b/mcd(a,b)=mcm(a,b)