#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,numero;
  set <int> numeros;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>numero;
    numeros.insert(numero);
  }
  cout<<numeros.size()<<endl;
}

