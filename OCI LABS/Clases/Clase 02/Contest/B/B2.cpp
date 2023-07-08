#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    char temp;
    cin>>s;
    for(int i=1;i<s.size()/2;i++){
        temp=s[2*i-2];
        s[2*1-2]=s[2*i-1];
        s[2*i-1]=temp;
        cout<<s<<endl;
    }
    cout<<s<<endl;
}
// esta mal el codigo xd
