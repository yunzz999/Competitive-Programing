#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='+' || s[2]=='+'){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}