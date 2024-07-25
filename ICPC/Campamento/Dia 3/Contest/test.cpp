#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>nodos(n);
    int temp1,temp2;
    for(int i=0;i<n;i++){
        cin>>temp1>>temp2;
        nodos[i].first=temp1;
        nodos[i].second=temp2;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i and (nodos[i].first==nodos[j].first or nodos[i].second==nodos[j].second)){
                cout<<nodos[i].first<<","<<nodos[i].second<<" ";
                cout<<nodos[j].first<<","<<nodos[j].second<<endl;
                count++;
            }
        }
    }
    if(n-count!=0){
        cout<<n-count-1<<endl;
    }
    else{
        cout<<n-count<<endl;
    }
}