#include <bits/stdc++.h>
using namespace std;

int intento1xd(){
    long long n,k,par=0,impar=0;
    cin>>n>>k;
    vector <long long> numeros (n);
    for(long long i=1;i<=n;i++){
        if(n/2%2==0){
            if(i%2==0){
                numeros[n/2+par]=i;
                par++;
            }
            else{
                numeros[0+impar]=i;
                impar++;
            }
        }
        else{
            if(i%2==0){
                numeros[n/2+1+par]=i;
                par++;
            }
            else{
                numeros[0+impar]=i;
                impar++;
            }
        }
    }
    cout<<numeros[k-1]<<endl;
    return 0;
}

//rechazado por tiempo de complejidad