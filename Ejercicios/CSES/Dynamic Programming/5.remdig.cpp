#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,1e8+1);
    dp[0]=0;
    for(int i=1;i<n+1;i++){
        int min=1e8+1;
        string s=to_string(i);
        for(int j=0;j<s.size();j++){
            if(dp[i-(s[j]-'0')]<min){
                int x=i-(s[j]-'0');
                min=dp[x];
            }
        }
        dp[i]=min+1;
    }
    cout<<dp[n]<<endl;
}