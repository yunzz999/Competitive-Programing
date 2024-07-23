#include <bits/stdc++.h>
using namespace std;

int cigarros(int n,int k,int s,int c){
    if(n < k){
        return s;
    }
    else{
        s+=(n+c)/k;
        c+=n%k;
        return cigarros(n/k,k,s,c);    
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int s=n;
    int c=0;
    cout<<cigarros(n,k,s,c)<<endl;
}