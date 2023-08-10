#include <bits/stdc++.h>
using namespace std;

vector < vector <int> > matriz; 

void crear_matriz(int n_nodos){  
	for(int i=0;i<n_nodos;i++){
		vector<int> row(n_nodos,0);
		matriz.push_back(row);
	}
}

void agregar_vecino(int nodo1 , int nodo2){ 
	matriz[nodo1][nodo2]=1;
	matriz[nodo2][nodo1]=1;
}

void mostrar_vecinos(int nodo, int total_nodos){
    for(int i=0;i<total_nodos;i++){
        if(matriz[nodo][i]==1){
            cout<<i+1<<" ";
        }
    }
}


int main() {
    int n, m;
    cin >> n >> m; // n es el numero de nodos, m es el numero de aristas
    crear_matriz(n);
    for (int i = 0; i < m; i++) { // Cambiado el bucle de n a m, ya que estás leyendo m aristas
        int x, y;
        cin >> x >> y;
        agregar_vecino(x - 1, y - 1); // Resta 1 para ajustar al índice base 0
    }
    for (int i = 0; i < n; i++) {
        mostrar_vecinos(i, n);
        cout << endl; // Agregado un salto de línea para separar los vecinos de cada nodo
    }
    return 0;
}
//error 