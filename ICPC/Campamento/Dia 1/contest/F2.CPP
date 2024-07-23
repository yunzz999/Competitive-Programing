#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,aux;
    cin>>n>>k;
    int fumados=0;
    int c=0;
    while (true){
        fumados=fumados+n;
        c=c+n;
        n=0;
        if (c<k){
            cout<<fumados;
            return 0;
            cout << "test";
        }
        aux=c%k;
        n=n+((c-aux)/k);
        c=aux;
    }
}