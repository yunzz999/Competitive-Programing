#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,a,b;

    cin>>m>>n;
    cin>>a>>b;

    int largo = m/a;
    int ancho =n/b;


    if(m%a!=0){
        largo++;
    }
    if(n%b!=0){
        ancho++;
    }

    cout<<(largo*ancho);

}

//Resuelto (100 puntos)