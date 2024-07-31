#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(ll n){
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    vector<ll> v;
    for(int i = 2; i <= static_cast<int>(pow(10, 6)); i++){
        if(is_prime(i)){
            v.push_back(static_cast<ll>(i) * i);
        }
    }
    for(auto x : v){
        cout << x << ",";
    }
}
