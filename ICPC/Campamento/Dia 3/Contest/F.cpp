#include <bits/stdc++.h>
using namespace std;

void dfs(int nodo, vector <vector<int>> &gr, vector <bool> &visitado){
	visitado[nodo] = true;
	// Pasamos por todos los vecinos del nodo
	for (int vecino : gr[nodo]){
		// Checkeamos si no lo hemos visitado
		if (!visitado[vecino]){
			// Importante ponerlo visitado antes de llamarlo para evitar ciclos
			visitado[vecino] = true;
			// Llamamos a la función
			dfs(vecino, gr, visitado);
		}
	}	
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> graph(n);
    vector<bool> v(n,false);
    vector<pair<int,int>>nodos(n);
    
    for(int i =0;i<n;i++){
        cin>>nodos[i].first>>nodos[i].second;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nodos[i].first==nodos[j].first or nodos[i].second==nodos[j].second){
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

        
    int componentes = 0;
    for(int i=0; i<n; i++){
	// Si el nodo i no ha sido visitado, pertenece a una componente
	// conexa que no hemos recorrido, así que la recorremos
	// y sumamos 1 al contador.
	    if(!v[i]){
		    dfs(i, graph, v);
		    componentes++;
	    }
    }
    if(componentes!=0){
        cout<<componentes-1<<endl;
    }
}
//pasa