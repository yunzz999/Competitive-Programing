#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n,max;
    cin>>x>>n;
    max=0;
    vector <int> v (n+1);
    v[n+1]=x;
    for (int i = 0; i<n;i++){
        cin>>v[i];
    }

    for ( int i = 0;i<n;i++){
        if (i>=1 and v[i]-v[i-1]>max){
            max=v[i]-v[i-1];
        }
    }
    cout<<max<<endl;
}