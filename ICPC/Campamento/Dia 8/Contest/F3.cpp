#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }


vector<int> divisores(int n){
	vector<int> sol = {1};
	for(int i=2;i<n;i++){
		if(n%i==0){
			sol.push_back(i);
		}
	}
	sol.push_back(n);
}

bool possible()// xd

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		
		vector<vector<ll>> grid(n,vector<ll>(m));
		vector <vector<ll>> dp(n,vector<ll>(m));

		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				cin>>grid[i][j];
			}
		}
		ll number=gcd(grid[n-1][m-1],grid[0][0]);
		vector<int> div= divisores(number);
		int sol=0;
		for(int i=0;i<div.size();i++){
			if(possible(div[i]) and div[i]>sol){
				sol=div[i];
			}
		}
		cout<<sol<<endl;
	}
}


// Se intento :c