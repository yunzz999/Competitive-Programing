#include <bits/stdc++.h>
using namespace std;

void solve(int l,int r,vector<int> v){
    int suma=0; 
    for(int i=l;i<r;i++){
        suma+=v[i];
    }
    cout<<suma<<endl;
}

int main(){
    int n , t , r, l;
    cin>>n>>t;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    while(t--){
        cin>>l>>r;
        solve(l,r,v);
    }
}

//resuelto 40 pts

//Cambiar complejidad a O(n)

