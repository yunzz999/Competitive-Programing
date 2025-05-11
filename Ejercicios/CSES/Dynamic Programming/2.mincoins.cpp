#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    vector<int>dp(c+1,-1);
    vector<int>coins(n,-1);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    dp[0]=0;
    for(int i=1;i<c+1;i++){
        int min=1e8+1;
        for(int j=0;j<n;j++){
            if(i-coins[j]>=0 and dp[i-coins[j]]!=-1 and dp[i-coins[j]]<min){
                min=dp[i-coins[j]];
            }
        }
        if(min==1e8+1){
            dp[i]=-1;
        }
        else{
            dp[i]=min+1;    
        }
    }
    cout<<dp[c]<<endl;
}