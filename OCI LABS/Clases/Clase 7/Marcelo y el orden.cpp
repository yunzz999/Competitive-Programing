#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  vector<int> numeros;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    numeros.push_back(x);
  }
  //resolucion O(nlog(n))
  sort(numeros.begin(),numeros.end());

  //Resolucion O(n^2)
  //Bubble sort
  //Insertion sort
  //Selection sort

  for(int i=0;i<n;i++){
    cout<<numeros[i]<<" ";
  }
  cout<<endl;
  return 0;

}
