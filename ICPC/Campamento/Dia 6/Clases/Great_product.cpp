#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool is_prime(ll n){
    for(ll i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ll n;
    cin>>n;
    set <ll> s;
    vector <ll> p;
    if(is_prime(n)){
        cout<<n<<endl;
        return 0;
    }

    // O(n*sqrt(n))
    ll i=2;
    while(n!=1){
        if(n%i==0 and is_prime(i) and n/i==1){
            cout<<i<<endl;
            s.insert(i);
            break;
        }
        else if(n%i==0 and is_prime(i)){
            n=n/i;
            s.insert(i);
            cout<<i<<"x";
        }

        else{
            i++;
        }
    }
    cout<<s.size()<<endl;
    cout<<s.size()*(s.size()+1)*0.5<<endl;    
}

// WA