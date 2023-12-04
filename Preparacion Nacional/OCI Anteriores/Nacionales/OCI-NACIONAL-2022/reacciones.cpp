#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    char c;
    string s="";
    map <char,int> mapa;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>c;
        auto it = mapa.find(c);

        if(it != mapa.end()){
            it->second++;
            s+=to_string(it->second)+" ";
            if(it->second > k){
                cout<<"imposible";
                return 0;
            }
        }
        else{
            mapa.insert(pair<char,int>(c,1));
            s+="1 ";
        }
    }
    cout<<s;
}

// Resuelto (100 pts)