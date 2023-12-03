#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <string> palabras;
    int n;
    string s;

    //while(getline(cin,s)){
        //palabras.push_back(s);
    //}


    cin>>n;
    for(int i=0;i<n+1;i++){
        getline(cin,s);
        palabras.push_back(s);
    }

    sort(palabras.begin(),palabras.end());

    for(int i=0;i<palabras.size();i++){
        cout<<palabras[i]<<endl;
    }
}

