#include <bits/stdc++.h>
using namespace std;

string solve(int sum , multiset <int> v){
    if(sum%2!=0){
        return "NO";
    }

    else if((sum/2)%2!=0 and v.count(1)==0){
        return "NO";
    }

    else{
        return "YES";
    }
}


int main(){
    int t,n,temp;
    multiset <int> candy;
    cin>>t;
    while(t){
        cin>>n;
        int suma = 0;
        for(int i=0;i<n;i++){
            cin>>temp;
            suma+=temp;
            candy.insert(temp);
        }
        cout<<solve(suma,candy)<<"\n";

    }
}

//falta mejorar