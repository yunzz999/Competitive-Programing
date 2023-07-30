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


int smallest(int n){
    int contador=n;
    while(divisible(n,contador)==false){
        contador++;
    }
    return contador;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<smallest(n)<<"\n";
    }
    return 0;
}