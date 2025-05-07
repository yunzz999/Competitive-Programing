#include <bits/stdc++.h>
using namespace std;

long long int mcd(long long int   a,long long int b) {
    if (b == 0) {
        return a;
    }
    return mcd(b, a % b);

}

int main() {
    long long int n, m, k;
    cin >> n >> m >> k;
    n = min(n, m);
    m = max(n, m);
    long long int r = mcd(n, m);
    long long int  mcm = (n * m) / r;
    long long int pos = 2*((mcm/n)-1);
    cout<<"pos: "<<pos<<endl;
    if (k / 2 % 2 == 0) {
        long long int phi0=(k/2)-(k/pos);
        cout<<"phi0="<<phi0<<endl;
        if(phi0%2==0){
            cout<<phi0*m;
        }
        else{
            cout<<phi0*n;
        }

    }
    else {
        long long int phi1=((k/2) + 1)-(k/pos);
        cout<<"phi1="<<phi1<<endl;
        if(phi1%2==0){
            cout<<phi1*m;
        }
        else{
            cout<<phi1*n;
        }

    }
}