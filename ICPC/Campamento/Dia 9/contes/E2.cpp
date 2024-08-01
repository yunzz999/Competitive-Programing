#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,e;
	cin>>n>>k>>e;
	
	// Caso bacan
	if(e>4 and n-k-e>4){
		cout<<0<<endl;
	}

	else{
		// Añado todos los posibles numeros que puedo usar
		vector<int> v;
		for(int i=1;i<max(e,n-k-e)+1;i++){
			if(i!=k){
				v.push_back(i);
			}
		}

		// Resto lo mas grande que pueda
		int temp1=n-k-e;
		for(int i=v.size()-1;i>=0;i--){
			if(temp1-v[i]>=0){
				temp1-=v[i];
				v.erase(v.begin()+i);
				
			}
		}

		int temp2=e;
		for(int i=v.size()-1;i>=0;i--){
			if(temp2-v[i]>=0){
				temp2-=v[i];
			}
		}

		cout<<temp1+temp2;

		// no funciona	
	}
}