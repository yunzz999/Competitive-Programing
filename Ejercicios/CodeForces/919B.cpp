#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sum_digits(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    if(sum==10){return true;}
    else{return false;}
}



int main(){
    int t,sol;
    int contador=0;
    int p=1;
    cin>>t;
    while(t>contador){
        if(sum_digits(10+9*p)){
            contador++;
            sol=10+9*p;
        }
        p++;
    }
    cout<<sol<<endl;
}
