#include <bits/stdc++.h>
using namespace std;

vector<int> v1;
vector<int> v2;
vector<int> v3;

void ceros(int diferencial,int largo){
    //tomar como entrada el vector y modificarlo desde esta funcion
}

void print_vector(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}

void suma(vector<int>v1 ,vector<int> v2){
    int resto = 0 ,suma;
    for(int i=v1.size();i>0;i--){
        if(resto>0 && v1[i]+v2[i]<2){
            if(v1[i]+v2[i]+resto==2){
                v3[i]=0;
                resto++;
            }
            else{
                v3[i]=1;
            }
            resto--;
        }
        else if()
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++){
        cin>>v1[i];
    }
    for(int i=0;i<y;i++){
        cin>>v2[i];
    }
    if(x>y){
        ceros(x-y,y);
    }
    else{
        ceros(y-x,x);
    }
}