#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int sol=0,k;
    if(m%n==0){
        k=m/n;
        while(k%3==0){
            sol++;
            k=k/3;
        }
        while(k%2==0){
            sol++;
            k=k/2;
        }
        if(k==1){cout<<sol<<endl;}
        else{cout<<-1<<endl;}
    }
    else{
        cout<<-1<<endl;
        return 0;

    }
}

//solved
