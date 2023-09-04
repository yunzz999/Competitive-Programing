//281A

#include <bits/stdc++.h>
using namespace std;

vector<int> encontrarDivisores(int numero) {
    vector<int> divisores;
    
    for (int i = 1; i * i <= numero; ++i) {
        if (numero % i == 0) {
            divisores.push_back(i);
            if (i != numero / i) {
                divisores.push_back(numero / i);
            }
        }
    }
    
    return divisores;
}


int main(){
    int n, intervalo=0,tmp=0;
    cin>>n;
    vector<int>divisores = encontrarDivisores(n);
    for(int i=0;i<divisores.size();i++){
        if(i==tmp+1){
            intervalo++;
        }
        else{
            intervalo=0;
        }        
        tmp=i;

    }
}