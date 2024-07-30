#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    string s;
    cin>>s;
    ll l=s.size();
    ll sum=0;
    ll b= 26;
    ll p=1000000007;
    for(ll i=0;i<l;i++){
        cout<<i<<"x"<<(p%b)<<"x"<<(p%(int(s[i])-96))<<endl;
        sum+=i*(b%p)*((int(s[i])-96)%p);
    }
    cout<<"hash: "<<sum<<endl;
}