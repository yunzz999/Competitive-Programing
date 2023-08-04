#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n ,lnumbers=0;
    vector <long long> v;
    cin>>n;
    while (n>0){
        v.push_back(n%10);
        n/=10;
    }

    for(int i=0;i<v.size();i++){
        if(v[i]==4 || v[i]==7){
            lnumbers++;
        }
    }
    if(lnumbers==7 || lnumbers==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
