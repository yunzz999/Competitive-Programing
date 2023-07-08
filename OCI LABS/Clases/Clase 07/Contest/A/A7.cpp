#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
  int gorrito;
  set <int> gorros;
  for(int i=0;i<4;i++){
    cin>>gorrito;
    gorros.insert(gorrito);
  }
  cout<<4-gorros.size();
  return 0;
}