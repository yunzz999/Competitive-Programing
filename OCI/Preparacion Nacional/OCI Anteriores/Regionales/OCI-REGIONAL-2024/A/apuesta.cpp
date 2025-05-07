#include <bits/stdc++.h>
using namespace std;




int main(){
    int n,sum=0;
    cin>>n;
    vector<int> v(n);
    vector<int> prefix_sum(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        prefix_sum[i]=sum;
    }

    int sol=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(i>0){
                if(prefix_sum[j]-prefix_sum[i-1]>0){
                    sol++;
                }
            }
            else{
                if(prefix_sum[j]>0){
                    sol++;
                }
            }
        }   
    }
    cout<<sol;
}

## No sirve