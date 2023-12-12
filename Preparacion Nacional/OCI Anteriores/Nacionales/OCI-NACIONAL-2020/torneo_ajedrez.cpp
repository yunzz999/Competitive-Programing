#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void winners (vector<double> v){
    vector <double> u;
    double puntaje_maximo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>puntaje_maximo){
            puntaje_maximo=v[i];
        }
    }

    for(int i=0;i<v.size();i++){
        if(v[i]=puntaje_maximo){
            cout<<i<<endl;
        }
    }

}



int main(){
    int n,p,a,b,c;
    vector <double> part(n);
    vector <double> w;
    cin>>n>>p;
    for(int i=0;i<p;i++){
        cin>>a>>b>>c;
        if(c==-1){
            part[a]+=1/2;
            part[b]+=1/2;
        }
        else if(c==a){
            part[a]++;
        }
        else{
            part[b]++;
        }
    }    
    winners(part);
}