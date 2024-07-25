#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void f(int n){
    int i=0,temp;
    int count =0;
    string s;
    while(n!=0){
        if(n%10!=0){
            temp=n%10*pow(10,i);
            s+=to_string(temp)+" ";
            n=n/10;
            i++;
            count++;
        }
        else{
            n=n/10;
            i++;
        }
    }
    cout<<count<<endl<<s<<endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        f(n);
    }
}