#include <bits/stdc++.h>
using namespace std;

unsigned int sum_squares(unsigned int  n){
    unsigned int resultado =0;
    for(unsigned int i =1;i<=n;i++){
        resultado+=i*i;
    }
    return resultado;
}

unsigned int sum_numbers(unsigned int  n){
    unsigned int suma=0;
    for(unsigned int i=0;i<=n;i++){
        suma+=i;
    }
    return suma*suma;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<abs(sum_numbers(n)-sum_squares(n))<<"\n";
    }
    return 0;
}

//respuesta erronea en un test xd