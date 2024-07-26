#include <bits/stdc++.h>
using namespace std;

void f(int n){
    int count=0;
    while(n!=0){
        if(n-4>=0){
            n=n-4;
            count++;
        }
        else{
            n=n-2;
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    int t,temp;
    cin>>t;
    while(t--){
        cin>>temp;
        f(temp);
    }
}