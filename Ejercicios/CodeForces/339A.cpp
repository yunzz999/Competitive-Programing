#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int x;
    vector <int> numeros;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            x=atoi(s[i]);
            numeros.push_back(x);
        }
    }
    sort(numeros.begin(),numeros.end());
    
}