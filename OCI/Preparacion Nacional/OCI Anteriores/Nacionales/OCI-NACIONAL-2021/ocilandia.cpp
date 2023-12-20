#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    vector <int> v (n);
    vector <int> sums (n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        for(int j = 0;j<v[i];j++){
            cin>>temp;
            sums[i]+=temp;
        }
    }

    sort(sums.begin(),sums.end());
    cout<<sums[0];
}

//resuelto 100pts