#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    long long n,x;
    cin>>n;
    long long suma =0;
    long long sumatoria=(n*(n+1))/2;
    for(long long i=0;i<n-1;i++){
        cin>>x;
        suma+=x;
    }

    cout<<sumatoria-suma;

}

//Rechazado por no usar todos long long (denuevo xdd)


