#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector <long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),[](long long a , long long b){return a>b;});
    long long max_sum=0;
    
    for(long long i=0;i<n;i++){
        v[i]=v[i]-(i+1);
        if(v[i]>0){
            max_sum+=v[i];
        }
        else{
            break;
        }
    }
    cout<<max_sum<<endl;
}