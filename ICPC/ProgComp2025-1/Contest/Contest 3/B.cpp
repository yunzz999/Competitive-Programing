#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int sum=0;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      sum+=v[i]*v[j];
    }
  }
  cout<<sum<<endl;
}

// AC