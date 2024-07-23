#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,temp;
    cin>>n;
    long long current=0;
    long long  min=0;
    for(long long i = 0;i<n;i++){
        cin>>temp;
        current+=temp;
        if(current<min){
            min=current;
        }
    }
    cout<<-min<<endl;
    return 0;
}