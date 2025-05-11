#include<bits/stdc++.h>
using namespace std;
 
 
const int M = 1e9+7;
long long exp_mod(int a,int b){
    if(b==0){
        return 1;
    }
    long long c=exp_mod(a,b/2)%M;
    if(b%2==0){
        return (c*c)%M;
    }
    else{
        return ((a%M)*((c*c)%M))%M;
    }
}   
 
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<exp_mod(a,b)%M<<endl;
    }
}