#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n>3 or n==1){
		for(int i=1;i<n+1;i++){
			if(i%2==0){
				cout<<i<<" ";
			}
		}
		for(int i=1;i<n+1;i++){
			if(i%2!=0){
				cout<<i<<" ";
			}
		}
	}
	else{
		cout<<"NO SOLUTION"<<endl;
	}
}