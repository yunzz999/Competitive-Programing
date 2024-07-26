#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>dp;
vector<string>g;

int f(int i,int j){
    if(i==0 and j==0){return 1;} // Caso inicial
    if(i<0 or j<0){return 0;} // Si esta fuera de la grilla
    if(g[i][j]=='X'){return 0;} // Si hay un obstaculo
    if(dp[i][j]!=-1){return dp[i][j];} // ya esta calculado
    int resultado=f(i-1,j)+f(i,j-1);
    dp[i][j]=resultado;
    return resultado;
}

int main(){
    int n;
    cin>>n;
    g.resize(n);
    dp.resize(n,vector<int>(n,-1));
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    cout<<f(n-1,n-1)<<endl;
    return 0;
}