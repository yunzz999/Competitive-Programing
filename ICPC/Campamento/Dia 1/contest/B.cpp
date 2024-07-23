#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s ;
    cin>>n;
    cin>>s;
    int suma=0;
    for(int i =0;i<n;i++){
        if((s[i]-'0')%2==0){
            suma+=i+1;
        }
    }
    cout<<suma<<endl;
}