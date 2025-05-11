#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,k;
	cin>>n;
	int number=1;
	int a=1;
	for(int i=0;i<n;i++){
		cin>>x>>k;
		a=a*pow(x,k);
		number=number*(k+1);
	}
	int prod=pow(a,number/2);
	cout<<number<<prod<<endl;
}