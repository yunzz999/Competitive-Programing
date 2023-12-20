#include <bits/stdc++.h>
using namespace std;


int main(){
    int n , t ,menor,indice;
    cin>>n>>t;
    int cambios[n];
    int tramos [t];

    for(int i=0;i<n;i++){
        cin>>cambios[i];
    }

    for(int i=0;i<t;i++){
        cin>>tramos[i];
    }

    for(int i=0;i<t;i++){
        menor=INT_MAX;
        for(int j=0;j<n;j++){
            if(tramos[i]<=cambios[j] and cambios[j]<menor){
                menor=cambios[j];
                indice=j+1;
            }
        }
        cout<<indice<<"\n";
    }
}

// 54 PUNTOS DE 100 , probablemente por mucho tiempo de complejidad O(N^2)