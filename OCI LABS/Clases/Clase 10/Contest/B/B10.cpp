#include <bits/stdc++.h>
using namespace std;

int main(){
  long long  n,resultado=0;
  vector <long long> palitos;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    palitos.push_back(x);
  }
  sort(palitos.begin(),palitos.end());

  long long  pivote = palitos[n/2];
  for(int i=0;i<n;i++){
    resultado+=abs(palitos[i]-pivote); 
  }
  cout<<resultado<<endl;
  return 0;
}
