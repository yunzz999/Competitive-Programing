#include <bits/stdc++.h>
using namespace std;

bool divisible(int numero,int intento){
    bool divisibilidad=true;
    for(int i=1;i<=numero;i++){
        if(intento%i!=0){
            divisibilidad=false;
            break;
        }
    }
    return divisibilidad;
}

int main(){
    int x,k;
    cin>>x>>k;
    cout<<divisible(x,k);
}
