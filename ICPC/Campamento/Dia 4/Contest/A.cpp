#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int n){
    if(n<=1399){
        cout<<"Division 4"<<endl;
    }
    else if(1400<=n and n<=1599){
        cout<<"Division 3"<<endl;
    }
    else if(1600<=n and n<=1899){
        cout<<"Division 2"<<endl;
    }
    else if(n>=1900){
        cout<<"Division 1"<<endl;
    }

}


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t,temp;
    cin>>t;
    while(t--){
        cin>>temp;
        solve(temp);
    }	
	return 0;
}