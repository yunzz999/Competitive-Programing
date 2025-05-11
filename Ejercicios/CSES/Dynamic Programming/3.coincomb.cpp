#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n,c;
    ll mod = 1e9+7;
    cin>>n>>c;
    vector<int>dp(c+1,-1);
    dp[0]=1;
    vector<int>coins(n,0);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    for(int i=1;i<c+1;i++){
        ll sum=0;
        for(int j=0;j<n;j++){
            if(i-coins[j]>=0){
                sum=(sum+dp[i-coins[j]])%mod;
            }
        }
        dp[i]=sum;
    }
    cout<<dp[c]<<endl;
}