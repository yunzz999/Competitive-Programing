#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int u;
    vector<vector<int>> graph(n);
    for(int i=0;i<n;i++){
        cin>>u;
        graph[i].push_back(u);
    }
    int a,b,c;
    for(int i=0;i<n;i++){
        a=graph[i][0];  
        b=graph[a-1][0];
        c=graph[b-1][0];
        if(c-1==i){
            cout<<"YES"<<endl;
            return 0;      
        }
    }
    cout<<"NO"<<endl;
    

}