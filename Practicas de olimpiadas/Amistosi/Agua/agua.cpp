#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,pinas=0,arandanos=0;
    cin>>n;
    vector <int> tiempo;
    vector <int> jugador;
    vector <int> recibe;

    for(int i=0;i<n;i++){
        cin>>tiempo[i]>>jugador[i]>>recibe[i];
    }

    for(int i=0;i<n;i++){
        if(tiempo[i]<=4){
            pinas+=100;
        }
        else{
            arandanos+=100;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(tiempo[i]-tiempo[j])<=10&&jugador[i]==jugador[j]&&jugador[i]<=4){
                pinas+=50;
            }
            else if(abs(tiempo[i]-tiempo[j])<=10&&jugador[i]==jugador[j]&&jugador[i]>=4){
                arandanos+=50;
            }
        }
    }
    cout<<pinas<<" "<<arandanos;
    return 0;
}