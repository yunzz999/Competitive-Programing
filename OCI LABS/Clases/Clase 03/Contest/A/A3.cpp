#include <iostream>
using namespace std;

int main(){
  int n;
  int sum=0;
  cin>>n;
  int arreglo[n];

  for(int i=0;i<n;i++){
    cin>>arreglo[i];
  }

  for(int i=0;i<n;i++){
    if(arreglo[i]==0){
      sum++;
    }
    else if(arreglo[i]==1){
      cout<<"HARD";
      break;
    }
  }
  
  if(sum==n){
    cout<<"EASY";
  }
}
