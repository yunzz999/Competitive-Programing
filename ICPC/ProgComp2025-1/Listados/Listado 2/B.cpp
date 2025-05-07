#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n==1){
        cout<<1<<endl<<1;
        return 0;
    }
    if(n==2){
        cout<<1<<endl<<1<<" "<<1;
        return 0;
    }

    vector<int>v(n+2,1);
    for(int i=2;i*i<(n+2);i++){
        if(v[i]==1){
            int k=2;
            while(k*i<=n+1){
                v[k*i]=2;
                k++;
            }
        }
    }
    cout<<2<<endl;
    for(int i=2;i<n+2;i++){
        cout<<v[i]<<" ";
    }
}
