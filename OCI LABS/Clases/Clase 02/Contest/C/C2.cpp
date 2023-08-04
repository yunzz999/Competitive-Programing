#include <iostream>
using namespace std;

int main() {
  int n; 
  int contador=0; //inicializa contador
  cin>>n;
  int vector[n];//crea un array de tamaño n
  
  for(int i=0;i<n;i++){
    cin>>vector[i];
  }
  int mayor = vector[0];
  int menor = vector[0];

  for(int i=1;i<n;i++){
    if(vector[i]>mayor){
      mayor=vector[i];
      contador++;
    }
    else if(vector[i]<menor){
      menor=vector[i];
      contador++;
    }
  }
  cout<<contador;
  return 0;
}