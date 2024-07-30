#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        int even=0;
        int odd=0;
        cin>>n;
        for(int i=0;i<2*n;i++){
            cin>>temp;
            if(temp%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==odd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}