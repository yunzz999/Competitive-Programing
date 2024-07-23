#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    char past=s[0];
    int max=0;
    int suma=0;
    for(int i=1;i<s.size()+1;i++){
        if(suma>max){
            max=suma;
        }

        if(s[i]==past){
            suma++;
        }
        else{
            suma=0;
        }
        past=s[i];   
    }
    cout<<max+1<<endl;
}