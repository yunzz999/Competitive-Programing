#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,solucion=0;
    cin>>n>>k;
    int  numeros[n];
    for(int i=0;i<n;i++){
        cin>>numeros[i];
    }
    for(int i=0;i<n;i++){
        if(numeros[i]>=numeros[k-1]&&numeros[i]>0){
            solucion++;
        }
    cout<<solucion<<endl;
}