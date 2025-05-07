#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,g;
    cin>>n>>k;
    if(n%2==0){
        g=n/2;
    }
    else{
        g=n/2 +1;
    }

    if(k>g){
        cout<<2*(k-g);
    }
    else{
        cout<<2*(k-1)+1;
    }
}

