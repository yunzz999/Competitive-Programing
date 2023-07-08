#include <iostream>
using namespace std;
int main() {
  int numero_amigos,altura;
  int resultado = 0;
  cin>>numero_amigos>>altura;

  int h_amigos[numero_amigos];

  for(int i=0;i<numero_amigos;i++){
    cin>>h_amigos[i];

    if(h_amigos[i]>altura){
      resultado +=2;
    }
    else{
      resultado++;
    }
  }

  cout<<resultado<<endl;
  return 0;
}

