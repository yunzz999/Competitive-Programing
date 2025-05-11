#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	int n;
	cin>>n;
	int temp,x;
	cin>>temp;
	ll sum=0;
	for(int i=1;i<n;i++){
		cin>>x;
		if(temp>x){
			sum+=temp-x;
		}
		else{
			temp=x;
		}
	}
	cout<<sum<<endl;
}