#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep_(i, k, n) for (int i = k; i < n; ++i)
typedef long long ll;

vector<int> v (1e6,0);

int collatz (int n,int count){
    if(v[n-1]!=0){
        return v[n-1]+count;
    }
    if(n%2!=0){
        count++;
        collatz(3*n+1,count);
    }
    else if(n%2==0){
        count++;
        collatz(n/2,count);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(10);
    int current,n;
    v[0]=1;
    int max_value=1;
    for(int i=1;i<=100;i++){
        current=collatz(i,0);
        v[i-1]=current;
        max_value=max(max_value,current);
        if(max_value==current){
            n=i;
        }
    }
    cout<<"el numero con la secuencia mas larga es: "<<n<<" y posee "<<max_value<<" terminos"<<endl;

    return 0;
}