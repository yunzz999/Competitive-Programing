#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    bool prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

int mayor_primo(int n){
    int mayor=0;
    for(int i=2;i<=n;i++){
        if(n%i==0 && is_prime(i) && i>mayor){
            mayor=i;
        }
    }
    return mayor;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        if(is_prime(n)){
            cout<<n<<"\n";
        }
        else{
            cout<<mayor_primo(n)<<"\n";
        }
    }
    return 0;
}

//fallo en un test x complejidad en el tiempo c: