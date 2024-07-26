#include <bits/stdc++.h>
using namespace std;

int f(int n){
    // dp
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    vector <int> bd = {1,2,5,10,20,50};
    vector <int> be= {5,10,20,50,100,200};
    vector <int> p;
    
    int n,d,e;
    cin>>n>>d>>e;
    for(int i=0;i<bd.size();i++){
        bd[i]=d*bd[i];
        p.push_back(bd[i]);
    }
    for(int i=0;i<be.size();i++){
        be[i]=d*be[i];
        p.push_back(be[i]); 
    }
    // sale con dp

	return 0;
}