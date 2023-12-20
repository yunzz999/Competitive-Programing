#include <bits/stdc++.h>
using namespace std;

int main(){
  vector <int> teles;
  int n , m,resultado=0;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    teles.push_back(x);
  }
  
  sort(teles.begin(),teles.end());
  
  for(int i=0;i<m;i++){
    if(teles[i]<0){
      teles[i]=teles[i]*-1;
    }
    else{
      break;
    }
    resultado+=teles[i];
  }
  cout<<resultado<<endl;
  return 0;
}

