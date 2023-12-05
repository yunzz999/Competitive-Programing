#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; // n es numero de excepciones y k el numero buscado
    int x,y; //valores temporales para coordenadas;
    
    //Input
    cin>>n>>k;

    //Multiset
    multiset <int> distancias; //Almacena las distancias hacia lonk
    
    //Input 2
    for(int i=0;i<n;i++){
        cin>>x>>y;
        distancias.insert(sqrt(x^2+y^2));
    }

    int total=0; 
    int i=1;


    while(total<=k){
        
        auto iterador=distancias.find(i);

        if(iterador != distancias.end()){
            total+=4; // significa que en ese radio estan todos
        }
        else{
            total+=4-distancias.count(i);
        }
        
        i++;
    }

    cout<<i-1;

}

// esta mal la logica , falta considerar puntos dentro del radio y numeros decimales