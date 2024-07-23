#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int menores=min(k,n-k);
    int suma_menores=0;
    for(int i;i<menores;i++){suma_menores+=v[i];}
    // falta
}