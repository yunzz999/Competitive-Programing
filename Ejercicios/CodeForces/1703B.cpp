#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,suma;
    string s;
    multiset <char> letras;
    cin>>t;

    while(t){
        cin>>n;
        cin>>s;
        suma=0;
        letras.clear();

        for(int i=0;i<n;i++){
            letras.insert(s[i]);
        }

        multiset <char>::iterator itr=letras.begin();

        while(itr!=letras.end()){
            suma+=letras.count(*itr)+1;
            itr++;
        }

        cout<<suma<<"\n";
    }
}

//xd