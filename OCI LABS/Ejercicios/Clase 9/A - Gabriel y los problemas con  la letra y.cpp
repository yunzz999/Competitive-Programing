#include <bits/stdc++.h>
using namespace std;

int main(){
  vector <int> numeros;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    numeros.push_back(x);
  }
  sort(numeros.begin(),numeros.end());
  for(int i : numeros){
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}