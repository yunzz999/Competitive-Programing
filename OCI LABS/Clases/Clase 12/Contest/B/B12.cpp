#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n;
  cin>>t;
  while(t>0){
    cin>>n;
    vector <int> numbers(n);
    for(int i=0;i<n;i++){
      cin>>numbers[i];
    }
    sort(numbers.begin(),numbers.end());
    int n_colores=n/2;
    int suma =0;
    for(int j=0;j<n_colores;j++){
      suma+= numbers[n-j-1] - numbers[j];
    }
    cout<<suma<<endl;
    t--;
  }
  return 0;
}