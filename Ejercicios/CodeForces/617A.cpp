#include <bits/stdc++.h>
using namespace std;

int main(){
    int contador=0;
    int llegada;
    int pasos[5]={1,2,3,4,5};
    cin>>llegada;
    while(llegada!=0){
        for(int i=4;i>=0;i--){
            if(pasos[i]<=llegada){
                llegada=llegada-pasos[i];
                contador++;
                break;
            }
        }
    }
    cout<<contador;
}