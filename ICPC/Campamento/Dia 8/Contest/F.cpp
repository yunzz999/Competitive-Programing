#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		
		vector<vector<int>> grid(n,vector<int>(m));
		vector <vector<int>> dp(n,vector<int>(m));

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>grid[i][j];
			}
		}

		dp[0][0]=grid[0][0];
		for(int i=0;i<n;i++){
			dp[i][0]=max(dp[i-1][0],grid[i][0]);
		}
		for(int j=0;j<m;j++){
			dp[0][j]=max(dp[0][j-1],grid[0][j]);
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				dp[i][j]=max(gcd(dp[i-1][j],grid[i][j]),gcd(dp[i][j-1],grid[i][j]));
			}
		}

		cout<<dp[n-1][m-1]<<endl;
	}
}