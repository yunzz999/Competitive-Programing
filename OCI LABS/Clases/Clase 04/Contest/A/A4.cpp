#include <iostream>
#include <queue>
using namespace std;

int main() {
  int t,x,opcion;
  cin>>t;

  queue<int>cola;

  for(int i=0;i<t;i++){
    cin>>opcion;
    if(opcion ==1){
      cin>>x;
      cola.push(x);
    }
    else if(opcion==2&&!cola.empty()){
      cola.pop();
    }
    else if(opcion==3&&!cola.empty()){
      cout<<cola.front()<<endl;
    }
    else if(opcion==3&&cola.empty()){
      cout<<"Empty!"<<endl;
    }
  }
  return 0;
}

