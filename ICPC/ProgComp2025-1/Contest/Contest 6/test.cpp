#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,m,k;
    cin>>n>>m>>k;
    n=min(n,m);
    m=max(n,m);

    for(int i=1;i<k;i++){
        cout<<n*i<<" "<<m*i<<" ";
    }
}