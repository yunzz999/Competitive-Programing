#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool lucky(int n){
    string s = to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]!='4' && s[i]!='7'){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++){
        if(lucky(i) and n%i==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

//it works