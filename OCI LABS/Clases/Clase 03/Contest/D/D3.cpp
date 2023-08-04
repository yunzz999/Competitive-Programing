#include <iostream>
#include <vector>
using namespace std;

int main() {

int x,y;
vector<vector<int>> matriz(5, vector<int>(5));

  for(int i=0;i<matriz.size();i++){
    for(int j=0;j<matriz[i].size();j++){
      cin>>matriz[i][j];
      }
    }
  
  for(int i=0;i<matriz.size();i++){
    for(int j=0;j<matriz[i].size();j++){
      if(matriz[i][j]==1){
        x=i-2;
        if(x<0){
          x=x*-1;  
        }
        y=j-2;
        if(y<0){
          y=y*-1;
        }
      break;  
      }
      }
    }
  cout<<x+y;
  return 0;
}
