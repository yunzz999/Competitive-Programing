#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(ll n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	vector <ll> v;
	for(int i=2;i<pow(10,6)+1;i++){
		if(is_prime(i)){
			v.push_back(i*i);
		}
	}
	for(auto x :v){
		cout<<x<<+",";
	}
}