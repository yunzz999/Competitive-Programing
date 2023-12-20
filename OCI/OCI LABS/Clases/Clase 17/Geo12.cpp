#include <bits/stdc++.h>
using namespace std;

vector < vector <int> > lista_ad;
vector < bool > visitado (lista_ad.size(),false)


void crear_lista(int n){
	for(int i=0;i<n;i++){
		vector <int> nodo= {};
		lista_ad.push_back(nodo);
	}
}

void agregar_vecino(int nodo1,int nodo2){
	lista_ad[nodo1].push_back(nodo2);
	lista_ad[nodo2].push_back(nodo1);
}

void print_lista_ad(){
	for(int i=0;i<lista_ad.size();i++){
		cout<<"Nodo "<<i<<": ";
		for(int j=0;j<lista_ad[i].size();j++){
			cout<<lista_ad[i][j]<<" ";
		}
		cout<<endl;
	}
}

void DFS(int nodo){  // Implementacion DFS
	visitado[nodo]=true;
	for(int i=0;i<lista_ad[nodo].size();i++){
		int vecino = lista_ad[nodo][i]
		if not(visitado[vecino]){
			DFS(vecino);
		}
	}
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
	if(visitados[4]){
		cout<<"Se puede llegar desde 0 hasta 4"<<endl;
	}
	else{
		cout<<"No se puede llegar desde 0 hasta 4"
	}
	resturn 0;
}

