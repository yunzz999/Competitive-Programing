#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    if(k>n/2 and n%2==0){
        k=k-n/2;
        cout<<2*k;
    }

    else if(k<n/2 and n%2==0){
        cout<<1+2*(k-1);
    }

    else if(k>n/2+1 and n%2!=0){
        k=(k-n/2)-1;
        cout<<2*k;
    }

    else if(k<=n/2+1 and n%2!=0){
        cout<<1+2*(k-1);
    }
}

//tiempo de complejidad