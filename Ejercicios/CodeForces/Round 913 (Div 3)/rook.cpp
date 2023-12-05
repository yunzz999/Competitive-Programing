#include <bits/stdc++.h>
using namespace std;


void solve (string s){
    string letras = "abcdefgh";
    string numbers = "12345678";
    char x = s[0];
    char y=s[1];

    for(int i=0;i<letras.size();i++){
        if(letras[i]!=x){
            cout<<string(1,letras[i])+string(1,y)<<"\n";
        }
    }

    for(int i=0;i<numbers.size();i++){
        if(numbers[i]!=y){
            cout<<string(1,x)+string(1,numbers[i])<<"\n";
        }
    }
}
int main(){
    int t;
    string posicion;
    cin>>t;
    for(int i =0;i<t;i++){
        cin>>posicion;
        solve(posicion);
    }
}

// resuelto 