#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll>> v;
    ll temp1,temp2;
    for(ll i=0;i<n;i++){
        cin>>temp1>>temp2;
        v.push_back(make_pair(temp1,temp2));
    }

    sort(v.begin(),v.end(),[](pair<ll,ll>a,pair<ll,ll> b)
    {
        return a.first>b.first;
    });
    
    ll i=0;
    ll sum=0;
    while(i<n){
        if(w==0){
            break;
        }
        if(w-v[i].second>=0){
            w=w-v[i].second;
            sum+=v[i].first*v[i].second;
            i++;
        }
        else{
            sum+=v[i].first*(w);
            break;
        }
    }
    cout<<sum<<endl;
}

// paso :3