#include <bits/stdc++.h>
using namespace std;

int main(){
    int num,sum=0,x;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>x;
        sum+=x;
    }
    cout<<sum/num;
}