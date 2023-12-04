#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, n ,k;
    cin>>p>>n>>k;

    int cantidad_minima = 0;
    vector <int> papas (p);
    
    for(int i=0;i<p;i++){
        cin>>papas[i];
    }
    
    sort(papas.rbegin(),papas.rend());
    
    for(int i=k-1;i<p;i+=n){
        cantidad_minima+=papas[i];
    }
    cout<<cantidad_minima;
    return 0;
}