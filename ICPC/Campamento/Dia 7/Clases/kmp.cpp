#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    vector<int> v(t.size());
    v[0]=0;
    int i=0;
    int j=1;
    while(j<t.size()){
        if(t[j]==s[i]){
            v[j]=v[j-1]+1;
            i++;
        }
        else{
            i=0;
        }
        j++;
    }
    cout<<s<<endl<<t<<endl;
    for(int x : v){
        cout<<x<<" ";
    }
}

// Falta implementacion

