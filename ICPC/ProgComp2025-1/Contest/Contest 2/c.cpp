#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int,int>v;
	int x, n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		if (v.find(x)==v.end()){
			cout << "-1 ";
			v[x]=i+1;
		} else {
			cout << v[x] << " ";
			v[x] = i+1;
		}
	}
}