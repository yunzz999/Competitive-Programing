#include <bits/stdc++.h>
using namespace std;

int main(){
    int marraquetas;
    cin>>marraquetas;

    if(marraquetas%2==0){
        cout<<marraquetas/2;
    }
    else{
        cout<<(marraquetas/2)+1;
    }
}