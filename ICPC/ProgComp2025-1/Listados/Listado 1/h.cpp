#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ps(n);
        int a,sum=0;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
            ps.push_back(sum);
        }
        string s;
        cin>>s;
        queue<int>cola;
        stack<int> pila;
        for(int i=0;i<n;i++){
            if(s[i]=="L"){
                cola.push(i);
            }
            else{
                pila.push(i);
            }
        }
        while(cola.pop()>pila.pop()):
            
    }
}