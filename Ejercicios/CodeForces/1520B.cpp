#include <bits/stdc++.h>
using namespace std;


bool numero(int n){
    bool ord_n=true;
    while(ord_n){
        int N = n%10;
        if((n-n%10)%10!=N){
            ord_n=false;
            break;
        }
        else if((n-n%10)%10==0){
            break;
        }
        n=n-n%10;
    }
    if(ord_n){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int n,x,cantidad;
    cin>>n;
    for(int i=1,i<n;i++){
        if(numero(i)){
            cantidad++;
        }
    }
}