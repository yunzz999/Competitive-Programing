#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    while(n!=m){
        cout<<n<<endl;
        if(n*2>m){
            n--;
            count++;
        }
        else{
            n=2*n;
            count++;
        }
    }
    cout<<count<<endl;
}