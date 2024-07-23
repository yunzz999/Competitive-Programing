#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector <long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long  oro=0;
    long long  gasto=1;
    for(long long i=n-1;i>0;i--){
        if(v[i]>gasto){
            oro+=v[i]-gasto;
            gasto++;
        }
        else{
            cout<<oro<<endl;
            return 0;
        }
    }
}