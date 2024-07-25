#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,u,v;
    cin>>n;
    vector<vector<int>> graph(n-1);
    for(int i=1;i<n;i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }
    int sol=0;
    for(int i=1;i<n;i++){
        if(graph[i].size()==1){
            sol++;    
        }    
    }
    cout<<(sol+1)/2<<endl;
}

// En teoria funciona
