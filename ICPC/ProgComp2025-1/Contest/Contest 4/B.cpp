#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    string s;
    cin>>n>>x;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='o'){
            x++;
        }
        if(s[i]=='x' and x>0){
            x--;
        }
    }
    cout<<x<<endl;
}