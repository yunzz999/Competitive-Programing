#include <bits/stdc++.h>
using namespace std;

int f(int n,vector<int> v){
    int suma=0;
    for(int i=0;i<n;i++){
        if(n>=v[i]){
            suma++;
        }
        else{
            return suma;
        }
    }
    return suma;
}

int main(){
    int n,d,temp;
    cin>>n;
    vector<int> precios (n);
    for(int i=0;i<n;i++){
        cin>>precios[i];       // o(n)
    }
    sort(precios.begin(),precios.end());
    cin>>d;
    while(d--){
        cin>>temp;
        cout<<f(temp,precios)<<endl;
    }
}

// pasa con binary search