#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ed=1;
    int money=0;
    int i=0;
    while(ed<c){
        money+=ed*b;
        while(money>=a){
            ed++;
            money-=a;
        }
        i++;
    }
    cout<<i<<endl;
}