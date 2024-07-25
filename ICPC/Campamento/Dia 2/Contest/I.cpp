#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int suma=0;
    int lower=v[0],maximo=0,minimo=pow(10,6)+1;
    for(int i=1;i<n;i++){
        suma+=max(lower,v[i])-min(lower,v[i]);
        if(max(lower,v[i])>maximo){
            maximo=max(lower,v[i]);
        }
        else if(min(lower,v[i])<minimo){
            minimo=min(lower,v[i]);
        }
        lower=v[i];
    }
    suma+=maximo-minimo;
    cout<<suma<<endl;
}