#include <bits/stdc++.h>
using namespace std;

int main(){
    string c;
    int r , s;
    cin>>s;
    for(int i=0;i<3;i++){
        cout<<i<<endl;
        if(c[i]=='R'){
            r=i;
        }
        else if(c[i]=='S'){
            s=i;
        }
    }
    cout<<"R: "<<r<<" S: "<<s;
}