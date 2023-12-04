#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n , ejercito_atacante,ejercito_defensor,ataca,defiende;
    cin>>n;
    ejercito_atacante=0;
    ejercito_defensor=0;
    for(int i=0;i<n;i++){
        cin>>ataca>>defiende;
        if(ataca>defiende){
            ejercito_defensor++;
        }
        else if(ataca<defiende){
            ejercito_atacante++;
        }
        else{
            ejercito_atacante++;
        }
    }
    cout<<ejercito_atacante<<" "<<ejercito_defensor;
}

//100 de 100 puntos 