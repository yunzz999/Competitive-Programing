#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; //Numero de segmentos
        cin>>n; 
        vector<pair<int,int>> segmentos(n);

        //Input 1
        for(int i=0;i<n;i++){
            cin>>segmentos[i].first>>segmentos[i].second;
        }

        int posicion = 0;
        int k = 0;
        int distancia = 0;

        for(int i=0;i<n;i++){
            distancia=min(abs(segmentos[i].first-posicion),abs(segmentos[i].second-posicion));
            posicion += distancia;
            k=max(k,distancia);
        }

        cout<<k<<"\n";

    }
}
