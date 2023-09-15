#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    long long n,movimientos=0;
    cin>>n;
    vector<long long> numbers (n);

    for(long long i=0;i<n;i++){
        cin>>numbers[i];
    }

    for(long long i=1;i<n;i++){
        if(numbers[i]<numbers[i-1]){
            movimientos+=numbers[i-1]-numbers[i];
            numbers[i]=numbers[i-1];
        }
    }
    cout<<movimientos<<endl;
}
