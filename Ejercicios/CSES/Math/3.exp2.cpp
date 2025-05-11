#include<bits/stdc++.h>
using namespace std;
 
long long exp_mod(int a,int b,int M){
    if(b==0){
        return 1;
    }
    long long int c=exp_mod(a,b/2,M)%M;
    if(b%2==0){
        return (c*c)%M;
    }
    else{
        return ((a%M)*((c*c)%M))%M;
    }
}   
 
int main(){
    int a,b,c,t;
    cin>>t;
    int M=1e9+7;
    while(t--){
        cin>>a>>b>>c;
        int x=exp_mod(b,c,M-1)%(M-1);
        cout<<exp_mod(a,x,M)%M<<endl;
    }
}