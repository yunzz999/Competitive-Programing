#include <bits/stdc++.h>
using namespace std;

// Funcion para comprobar que numeros existen en la lista

bool existe(int numero , vector<int>lista){
    for(int i=0;i<lista.size();i++){
        if(lista[i]==numero){
            return true;
        }
    }
    return false;
}

int main(){
    
    //Input
    int numeros,multiplo,buscado,temp=1;
    cin>>numeros;
    
    //Creando vector de numeros disgustados
    vector<int>excepciones(numeros);
    vector<int>multiplos;

    //Input #2
    for(int i =0 ;i<numeros;i++){
        cin>>excepciones[i];
    }
    //Input #3
    cin>>multiplo>>buscado;

    while(multiplos.size()<buscado){ // Hasta que la lista de multiplos sea menor al numero buscado
        if(!existe(multiplo*temp,excepciones)){ // si no existe en la lista de excepciones
            multiplos.push_back(multiplo*temp); // lo agregamos a la lista
        }
        temp++;
    }

    cout<<multiplos[buscado - 1]<<endl;
}