#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    long long number , temp=2,N=2;
    //number=1e5;
    cin>>number;
    vector<pair<long long , long long>> v{{1, 1}, {2, 2}};

    for(long long i=2;i<=number;i++){
        if(temp==0){
            N++;
            temp=v[N-1].second;
        }
        v.push_back(make_pair(i,N)); 
        temp--;
    }
    cout<<N;
}

// 25 puntos xd