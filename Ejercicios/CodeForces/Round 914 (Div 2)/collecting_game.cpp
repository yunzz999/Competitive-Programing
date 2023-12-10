#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve (vector<ll> v , int n){
    sort(v.begin(),v.end());
    auto it = upper_bound(v.begin(),v.end(),n);
    return distance(v.begin(),it)-1;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t,n;
    cin>>t;

    while(t--){
        cin>>n;

        vector<ll> array(n);

        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        
        for(int i=0;i<n;i++){
            cout<<solve(array,i)<<" ";
        }
        cout<<"\n";   
    }
}

//contar cuantos numeros menores o iguales a el existen
