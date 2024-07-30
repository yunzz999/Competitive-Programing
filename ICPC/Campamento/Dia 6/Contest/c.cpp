#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool con=false;

        if(s.size()==1){
            cout<<"NO"<<endl;    
        }
        
        else{
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='1'){
                    cout<<"Yes"<<endl;
                    con=true;
                    break;
                }
            }

            if(con==false){
                cout<<"No"<<endl;
            }

        }
    }
}

// sirvio