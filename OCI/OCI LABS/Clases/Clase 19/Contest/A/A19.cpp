#include <bits/stdc++.h>
using namespace std;


vector < vector <int> > lista_ad;
vector < bool > visitado (lista_ad.size(),false);

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

void DFS(int nodo){  // Implementacion DFS
	visitado[nodo]=true;
	for(int i=0;i<lista_ad[nodo].size();i++){
		int vecino = lista_ad[nodo][i];
		if (!visitado[vecino]){
			DFS(vecino);
		}
	}
}


int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    crear_lista(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        agregar_vecino(x,y);
    }
    if(n-1!=m){
        cout<<"NO";
        return 0;
    }
    DFS(1);
    for(int i=1;i<n;i++){
        if (!visitado[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}

