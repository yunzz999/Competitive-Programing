#include <bits/stdc++.h>
using namespace std;

void tokens (vector<pair<int,int>>& points,int A,int B){
    int sum=0;
    string s;
    vector<pair<int,int>>new_points;
    for(int i=0;i<points.size();i++){
        if(points[i].second<A*points[i].first + B){
            sum++;
            s+=to_string(i+1)+" ";
        }
        else{
            new_points.push_back(points[i]);
        }
    }
    points=new_points;
    cout<<sum<<" "<<s<<endl;
}


int main(){
    int t,p,temp1,temp2;
    vector<pair<int,int>> v;

    cin>>t;

    for(int i=0;i<t;i++){
        cin>>temp1>>temp2;
        v.push_back({temp1, temp2});
    }
    
    cin>>p;

    for(int i=0;i<p;i++){
        cin>>temp1>>temp2;
        tokens(v,temp1,temp2);
    }
}