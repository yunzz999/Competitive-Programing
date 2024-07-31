#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,m,a;
	cin>>n>>m>>a;
	ll l1,l2;
	if(n%a==0){
		l1=n/a;
	}
	else{
		l1=n/a+1;
	}

	if(m%a==0){
		l2=m/a;
	}
	else{
		l2=m/a+1;
	}
	cout<<l1*l2<<endl;
}