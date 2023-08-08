#include <bits/stdc++.h>
using namespace std;

vector<int>v;
vector<int> mod2;

bool is_in_array(int n){

}

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int k=0;k<n;k++){
            cin>>v[k];
            mod2.push_back(v[k]%2);
        }
        int total=0;
        for(int j=0;j<n;j++){
            if(is_in_array(j)){
                if(j!=mod2[j]){
                    total++;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
    }

}

//xd