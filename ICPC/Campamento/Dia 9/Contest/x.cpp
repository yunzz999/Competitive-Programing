#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main (){
	int t;
	cin>>t;
	while(t--){
		string s,c;
		cin>>s;
		c=tolower(s[0])+tolower(s[1])+tolower(s[2]);
		if(c=="yes"){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}