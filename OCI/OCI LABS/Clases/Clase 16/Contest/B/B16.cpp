#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =4;
    vector <int> grafo (n+1);
    
    ios::sync_with_stdio(0);cin.tie(0);

    for(int i=0;i<3;i++){
        int a,b;
        cin >> a>>b;
        grafo[a] ++;
        grafo[b]++;
        if(grafo[a]==3 or grafo[b]==3){
            cout<<"NO\n";
            return 0;
        }

    }
    cout<< "YES\n";
    return 0;
}