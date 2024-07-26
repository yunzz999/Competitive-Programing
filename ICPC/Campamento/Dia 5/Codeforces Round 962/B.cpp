#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,m;
    string temp;
    cin>>t;
    while(t--){
        cin>>n>>k;
        m=n/k;
        string s;
        vector<string> v;
        for(int i=0;i<n;i++){ 
            cin>>temp;
            v.push_back(temp);
        }
        string sol;
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                sol+=v[i][j];
            }
            sol+='\n';
        }
        cout<<sol;
    }
}