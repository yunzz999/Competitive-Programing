#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    int n,contador=0;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i].first<=v[j].first and v[j].first <=v[i].second){
                contador++;
            }
        }
    }
    cout<<contador;
}