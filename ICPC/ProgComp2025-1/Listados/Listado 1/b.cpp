#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=1;i<s.size();i++){
        if(s[i]=='|'){
            cout<<count<<" ";
            count=0;
            
        }
        else{
            count++;
        }
    }
}