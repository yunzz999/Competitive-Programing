#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,h,w;
	cin>>n>>h>>w;
	while(n--){
		char h1,w1;
		cin>>h1>>w1;
		if(h1=='Y' or  w==0){
			h--;
			w++;
			cout<<"Y"<<" ";
		}
		else{
			cout<<"N"<<" ";
		}

		if(w1=='Y' or h==0){
			w--;
			h++;
			cout<<"Y"<<" ";
		}
		else{
			cout<<"N"<<" ";
		}
		cout<<endl;
	}
}