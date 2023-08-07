#include <bits/stdc++.h>
#define REP(i,a,b) for(int i =a;i<b;i++)
using namespace std;

vector < vector <int> > matriz; //Definicion de la matriz

void crear_matriz(int n_nodos){  // Inicializacion de la matriz
	for(int i=0;i<n_nodos;i++){
		vector<int> row(n_nodos,0);
		matriz.push_back(row);
	}
}

void agregar_vecino(int nodo1 , int nodo2){ //Agregar una relacion
	matriz[nodo1][nodo2]=1;
	matriz[nodo2][nodo1]=1;
}

void mostrar_vecinos(int nodo, int total_nodos){
    for(int i=0;i<total_nodos;i++){
        if(matriz[nodo][i]==1){
            cout<<i<<" ";
        }
    }
}


int main(){  // creando la matriz
    int n,m;
    cin>>n>>m; // n es el numero de nodos , m es el numero de aristas
	crear_matriz(n);
    REP(i,0,m){
        int x,y;
        cin>>x>>y;
        agregar_vecino(x,y);
    }
    for(int i=0;i<n;i++){
        mostrar_vecinos(i,n);
    }
	return 0;
}