#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}


int main(){
    int a,b;
    cin>>a>>b;
    int minimo=min(a,b);
    cout<<fact(minimo)<<endl;
}