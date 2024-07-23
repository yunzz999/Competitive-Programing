#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,temp;
    cin>>n;
    long long suma=0;
    for(int i=0;i<n-1;i++){
        cin>>temp;
        suma+=temp;
    }
    cout<<(0.5*n*(n+1))-suma<<endl;
}