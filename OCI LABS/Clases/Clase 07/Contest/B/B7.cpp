#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  map <int,int>hoja;
  int n,numero;
  int total =0;
  cin>>n;
  for(int i =0;i<n;i++){
    cin>>numero;
    if(hoja.count(numero)&&hoja[numero]==1){
      hoja[numero]-=1;
    }else{
      hoja[numero]=1;
    }
  }
  for (const auto& par : hoja){
     total+=par.second;
   }
  cout<<total;
  return 0;
}