#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int power_of_two(int n){
    int p=1;
    while(true){
        if(pow(2,p)<=n){
            p++;
        }
        else{
            cout<<p-1<<endl;
            return 0;
        }
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int vs=power_of_two(n);
    vector<int> v (vs);
    
}