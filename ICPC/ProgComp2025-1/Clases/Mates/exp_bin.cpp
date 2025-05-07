#include<bits/stdc++.h>
using namespace std;

long long exp(long long a,long long b){
    if(b==0){
        return 1;
    }
    long long c=exp(a,b/2);
    if(b%2==0){
        return c*c;
    }
    else{
        return c*c*a;
    }
}


int main(){
    long long a,b;
    cin>>a>>b;
    cout<<exp(a,b);
}