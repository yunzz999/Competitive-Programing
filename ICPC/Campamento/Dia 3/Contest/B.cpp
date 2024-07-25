#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        if(n-1<=m){
            cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
}