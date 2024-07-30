#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //o(n)

    int maximo=-1;
    
    for(int i=1;i<n;i++){
        int j=i;
        int road=0;
        int sum=0;
        while(sum<=t){
            sum+=v[j];
            road++;
        }
        maximo=max(road,maximo);
    }
    cout<<maximo<<endl;
}