#include <bits/stdc++.h>
using namespace std;

bool existe(long long a,vector<long long> v){
    for(long long i=0;i<v.size();i++){
        if(v[i]==a){
            return true;
        }
    }
    return false;
}


int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    long long n,multiplo,buscado,temp=1;
    cin>>n;
    vector <long long> excepciones(n);
    for(long long i=0;i<n;i++){
        cin>>excepciones[i];
    }
    cin>>multiplo>>buscado;
    
    vector<long long> multiplos(buscado);

    while(multiplos.size()<buscado+1){
        if(!existe(multiplo*temp,excepciones)){
            multiplos.push_back(multiplo*temp);
        }
        temp++;
    }

    cout<<multiplos[buscado-1]<<"\n";

}