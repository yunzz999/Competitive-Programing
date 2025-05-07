#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    cin>>N;
    long long int X=sqrt(N);
    long long int sum=0;
    long long int s;
    for (int v=1;v<=X;v++){
        s=pow(2,v);
        sum+=(sqrt(N/s)+1)*0.5;
    }
    cout<<sum;
}