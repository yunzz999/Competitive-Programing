#include <bits/stdc++.h>
using namespace std;

string contrasena(string palabra,vector<pair<char,char>>v){
    int size = 0;
    while(size<v.size()){
        for(int i=0;i<palabra.size();i++){
            if(palabra[i]==v[size].first){
                palabra[i]=v[size].second;
            }
            else if(palabra[i]==v[size].second){
                palabra[i]=v[size].first;
            }
        }
        size++;
    }
    return palabra;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int encriptaciones,palabras;
    string palabra;
    cin>>encriptaciones>>palabras;
    
    vector<pair<char,char>>cifrado(encriptaciones);
    
    for(int i=0;i<encriptaciones;i++){
        cin>>cifrado[i].first>>cifrado[i].second;
    }

    for(int i=0;i<palabras;i++){
        cin>>palabra;
        cout<<contrasena(palabra,cifrado)<<endl;
    }
}

//funciono xd