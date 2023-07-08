#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,q,numerito;
  vector <long long>::iterator xd;
  vector <long long> numeritos;
  cin>>n>>q;
  for(long long i=0;i<n;i++){
    long long x;
    cin>>x;
    numeritos.push_back(x);
  }
  for(long long i=0;i<q;i++){
    cin>>numerito;
    xd=upper_bound(numeritos.begin(),numeritos.end(),numerito)-1;
    if(*xd==numerito){
      cout<< xd - numeritos.begin()<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
  return 0;
}