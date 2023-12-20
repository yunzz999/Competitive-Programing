#include <iostream>
using namespace std;

int main() {
  int n,numero;
  int resultado=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>numero;
    resultado+=numero;
  }
  cout<<resultado;
  return 0;
}
