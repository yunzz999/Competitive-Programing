#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,m;
    cin>>n >>m;
    vector <vector<int>> grafo (n+1);
    while(m--){
        int u,v;
        cin>>u>>v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    for(int i=0;i<=n;i++){
        cout<<grafo[i].size()<<endl;
    }
    return 0;
}











