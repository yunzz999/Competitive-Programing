#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n,q,l,r,mid;
  cin >> t;
  for (int i = 0; i<t; i++){
      cin >> n >> q;
      vector <int> v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
    sort(v.begin(),v.end());
      vector <long long> suma(n);
      suma[0]=v[n-1];
      for(int i=1;i<n;i++){
        suma[i]=v[n-i-1]+suma[i-1];
      }
    for (int i=0; i<q; i++){
      int x = 0;
      cin >> x;
      l=0;
      r=n-1;
      while (l<r){
        mid= (l+r)/2;
        if (suma[mid]>=x){
          r=mid;
        } else {
          l=mid+1;
        }
      }
      if (suma[l]>=x) {
        cout << l+1 << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
}
// funciona