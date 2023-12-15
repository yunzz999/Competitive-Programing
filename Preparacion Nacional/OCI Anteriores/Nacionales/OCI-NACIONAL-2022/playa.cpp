#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector <vector<int>> v (n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]==v[i][j-1] and j>0){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<m-1;
}

// 20 pts