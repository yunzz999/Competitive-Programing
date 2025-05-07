#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first>>v[i].second;
	}
	int q,t,d;
	cin>>q;
	for(int i =0;i<q;i++){
		cin>>t>>d;
		int mod=v[t-1].first;
		int restoj=v[t-1].second;
		int restok=d%mod;
		if(restoj==restok){
			cout<<d<<endl;
		}
		if(restoj>restok){
			cout<<d+(restoj-restok)<<endl;
		}
		if(restok>restoj){
			cout<<d+(mod-restok)+restoj<<endl;
		}
	}
}