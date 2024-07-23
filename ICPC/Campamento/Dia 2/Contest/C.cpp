#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string a,b;
        cin>>n>>m;
        cin>>a>>b;
        int k=0;
        for(int i=0;i<m;i++){
            if(b[i]==a[k]){
                k++;
            }
        }
        cout<<k<<endl;
    }
}