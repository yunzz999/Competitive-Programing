#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    bool four =false , seven = false , other = false;
    vector <int> v;
    cin>>n;
    while (n>0){
        v.push_back(n%10);
        n/=10;
    }

    for(int i=0;i<v.size();i++){
        if(v[i]==4){
            four=true;
        }
        else if(v[i]==7){
            seven = true;
        }
        else{
            other=true;
        }
    }

    if(seven==true&&four==true&&other==false){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
}

//xd

