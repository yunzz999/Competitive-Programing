#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<ll>dp(6,0);
    ll mod = 1e9+7;
    dp={1,2,4,8,16,32};
    for(int i=6;i<n;i++){
        ll sum=0;
        for(int j=0;j<6;j++){
            sum=(sum+dp[j])%mod;
        }
        for(int i=0;i<5;i++){
            dp[i]=dp[i+1];
        }
        dp[5]=sum;
    }
    if(n<=6){
        cout<<dp[n-1]<<endl;
    }
    else{
        cout<<dp[5]<<endl;
    }
}