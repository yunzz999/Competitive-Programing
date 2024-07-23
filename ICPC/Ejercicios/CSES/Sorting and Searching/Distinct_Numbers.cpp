#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,temp;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>temp;
        s.insert(temp);
    }
    cout<<s.size()<<endl;
}