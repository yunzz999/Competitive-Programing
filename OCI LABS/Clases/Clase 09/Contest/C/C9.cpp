#include <bits/stdc++.h>
using namespace std;

int bubble_sort(vector <int> vector){
  int i,j,tmp,resultado=0;
  for(i=0;i<vector.size();i++){
    for(j=0;j<vector.size()-i-1;j++){
      if(vector[j]>vector[j+1]){
        tmp=vector[j];
        vector[j]=vector[j+1];
        vector[j+1]=tmp;
        resultado++;
      }
    }
  }
  return resultado;
}

int main(){
  vector<int> vectorsito;
  int t,n,caso_prueba;
  cin>>t;
  for(int i=0;i<t;i++){
    for(int j=0;j<21;j++){
      int x;
      cin>>x;
      vectorsito.push_back(x);
    }
    caso_prueba=vectorsito[0];
    vectorsito.erase(vectorsito.begin());
    cout<<caso_prueba<<" "<<bubble_sort(vectorsito)<<endl;
    vectorsito.clear();
  }
}