#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//input de datos
	int n,resultado=0;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	for(int i=0;i<(2*n)-1;i++){
		if(i+3<(2*n)-1 and v[i+1]==0 and v[i+3]==1){
			resultado+=(v[i+4]*v[i+2])+v[i];
			i+=4;
		}
		
		else if(i+3<(2*n)-1 and v[i+1]==0 and v[i+3]==1){
			resultado+=(v[i+4]*v[i+2])+v[i];
			i+=4;
		}

		else if(v[i+1]==0){
			resultado+=v[i]+v[i+2];
			i+=2;
		}
		else if(v[i+1]==1){
			resultado+=v[i]*v[i+2];
			i+=2;
		}
	}
	cout<<resultado<<"\n";
}