#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n,temp,m;
	cin>>n;
	set <int> s;
	int i=0;
	while(i<2){
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>temp;
			s.insert(temp);
		}
		i++;
	}

	for(int i=1;i<n+1;i++){
		if(s.count(i)==0){
			cout<<"Oh, my keyboard!"<<endl;
			return 0;
		}
	}
	cout<<"I become the guy."<<endl;
	return 0;
}