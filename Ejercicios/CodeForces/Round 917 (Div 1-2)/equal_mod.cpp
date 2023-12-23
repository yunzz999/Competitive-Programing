#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep_(i, k, n) for (int i = k; i < n; ++i)
typedef long long ll;

void find_k(vector<int> v){
    int g=v[0];
    for(int i=0;i<v.size();i++){
        g=__gcd(g,v[i]);
    }
    if(g==1){
        cout<<1<<endl;
    }
    else{
        cout<<g<<endl;
    }

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(10);
    
    int t,n;
    while(t--){
        cin>>n;
        vector<int> v (n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        find_k(v);
    }
  
    return 0;
}

// nose si funciona