#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    int raiz = sqrt(n)+1;
    if(n%2==0 and n!=2){
        return false;
    }

    for(int i=3;i<raiz;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool xd (int n){
    bool c = true;
    int s =2;
    while(c<n-1){
        long long r = pow(s,n);
        if(r%n!=s){
            return false;
        }
        s++;
    }
    return true;
}


int main(){
    int n;
    while(cin>>n and n!=0){
        if(!is_prime(n) and xd(n)){
            cout<<"The number "<<n<<" is a Carmichael number.";
        }
        else{
            cout<<n<<" is a normal number.";
        }
    }
}