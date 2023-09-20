#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,temp;
    cin>>n>>m;
    int ataque_maximo=0;
    int poblacion_maxima=0;

    for(int i=0;i<n;i++){
        cin>>temp;
        ataque_maximo+=temp;
    }

    for(int i=0;i<m;i++){
        cin>>temp;
        poblacion_maxima+=temp;
    }

    if(ataque_maximo>=poblacion_maxima and n>=m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}