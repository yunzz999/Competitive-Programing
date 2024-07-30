#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector <int> p;
    if(is_prime(n)){
        cout<<n<<endl;
        return 0;
    }

    // O(n*sqrt(n))
    int i=2;
    while(n!=1){
        if(n%i==0 and is_prime(i)){
            n=n/i;
            cout<<i<<"x";
        }
        else if(
            
        )

        else{
            i++;
        }
    }    
}

// WA