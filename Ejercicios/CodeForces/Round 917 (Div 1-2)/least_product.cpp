#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep_(i, k, n) for (int i = k; i < n; ++i)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(10);
    
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll temp;
        int c=0;
        rep(i,n){
            cin>>temp;
            if(temp<0){
                c++;
            }
        }
        if(c%2!=0){
            cout<<0<<endl;
        }
        else if(c%2==0){
            cout<<1<<endl<<1<<" "<<0<<endl;
        }

    }
    return 0;
}

//idk