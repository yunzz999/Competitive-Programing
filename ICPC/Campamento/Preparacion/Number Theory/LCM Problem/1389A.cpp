#include <bits/stdc++.h>
using namespace std;

void LCM(int l, int r ){
    if(2*l>r){
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        cout<<l<<" "<<2*l<<endl;
    }
}

int main(){
    int l,r,t;
    cin>>t;
    while(t--){
        cin>>l>>r;
        LCM(l,r);
    }
}

// analisis matematico