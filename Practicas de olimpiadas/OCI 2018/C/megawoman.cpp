#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int meta,v_mw,p_mw,r; // Define variables
    bool condicion = true;
    cin>>meta;
    cin>>p_mw>>v_mw;
    cin>>r;
    int current_mw=p_mw;
    vector<pair<int,int>> robots(r);
    for(int i=0;i<r;i++){
        cin>>robots[i].first>>robots[i].second;
    }
    while(current_mw<meta-1){
        for(int i=0;i<r;i++){
            if(p_mw-robots[i].first==robots[i].second*i-v_mw*i){
                condicion=false;
                break;
            }
        }
        if(condicion){
            current_mw+=v_mw;
        }
        else{
            break;
        }
    }
    if(current_mw>meta-1){
        cout<<"SI"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}