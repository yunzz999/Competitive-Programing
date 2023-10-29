#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,primero , segundo;
    pair <int,int> mayor;
    int indice ;
    
    cin>>n; 
    
    mayor.first = 0;
    mayor.second = 0 ;
    for(int i =0;i<n;i++){
        cin>>primero;
        cin>>segundo;
        if(primero>mayor.first){
            mayor.first=primero;
            mayor.second =segundo;
            indice=i+1;
        }
        
        else if (primero == mayor.first  and segundo < mayor.second){
            mayor.first=primero;
            mayor.second =segundo;
            indice=i+1;
        }
    }
    cout<<indice<<endl;
}