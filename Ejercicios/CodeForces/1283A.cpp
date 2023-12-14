#include <bits/stdc++.h>
using namespace std;

void solve (int h,int m){
    int hours=(23-h)*60;
    int minutes=60-m;
    cout<<hours+minutes<<endl;
}

int main(){
    int t,h,m;

    cin>>t;
    while(t--){
        cin>>h>>m;
        solve(h,m);
    }
}