#include <bits/stdc++.h>
using namespace std;

void sum (int a,int b ,int c){
    if(a+b==c||a+c==b||b+c==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        sum(a,b,c);
    }
}