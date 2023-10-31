#include <bits/stdc++.h>
using namespace std;


int main(){
    int solutions=0;
    int n;

    cin>>n;

    for(int i=0;i<n;i++){
        if((n-i)%2==0){
            solutions++;
        }
    }
    cout<<solutions;
}