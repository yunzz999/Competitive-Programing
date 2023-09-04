#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int n,s1,s2,s3,contador=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>s1>>s2>>s3;
    for(int i=0;i<n;i++){
        if(v[i]==s1 and v[i+1]==s2 and v[i+2]==s3){
            contador++;
        }
    }
    cout<<contador;
}

//Resuelto Tiempo de complejidad O(n)