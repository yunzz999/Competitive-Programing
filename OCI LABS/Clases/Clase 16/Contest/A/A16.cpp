#include <bits/stdc++.h>
using namespace std;

vector < vector <int> > lista_ad;

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



int main(){
    int n,m,x,y;
    cin>>n>>m;
    crear_lista(n);
    for(int i=0;i<m;i++){
        cin>>x>>y;
        agregar_vecino(x,y-1);
    }
    for(int i=1;i<n;i++){
        cout<<lista_ad[i].size()<<endl;
    }

}











