#include <iostream>>
#include <string.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string numeros[] = {"one","two","three","four","five","six","seven","eight","nine"};

  if(n>9 && 1<=n && n<= 1000000000){
    cout<<"Greater than 9";
  }
  else if(n<=9 && 1<=n && n<= 1000000000){
    cout << numeros[n-1];
  }
}

