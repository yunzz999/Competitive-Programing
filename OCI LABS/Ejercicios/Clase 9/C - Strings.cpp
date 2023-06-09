#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<string> palabras;
  int n;
  cin>>n; //xd
  for(int i=0;i<n;i++){
    string x;
    cin>>x;
    palabras.push_back(x);
  }
  sort(palabras.begin(),palabras.end());
  for(string i : palabras){
    cout<< i<<" ";
  }
  cout<<endl;
  return 0;
}