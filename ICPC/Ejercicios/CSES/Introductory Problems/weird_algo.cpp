#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    cout<<n<<" ";
    while (n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n=3*n +1;
            cout<<n<<" ";
        }
    }

}

// recordar long long 