#include <bits/stdc++.h>
using namespace std;

void solve(int x){
    int max=x;
    for(int i=2;i<sqrt(x);i++){
        if(x%i==0 and 2*i>max){
            max=2*i;
        }
    }
    if(max==x){
        cout<<x-1<<endl;
    }
    else{
        cout<<max/2<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        solve(x);
    }

}

