#include<bits/stdc++.h>
using namespace std;

int main(){
    int best=-1; 
    int mini= 1001;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>best){
            best=x;
        }
        if(x<mini){
            mini=x;
        }
    }
    cout<<best-mini<<endl;
}