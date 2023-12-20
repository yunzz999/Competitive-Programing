#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int h,w,m,n,temp;
    int max_value=0,min_value=10e8;
    cin>>h>>w>>m>>n;
    vector<vector<int>> matrix;
    vector <int> values;
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>temp;
            max_value=max(temp,max_value);
            min_value=min(temp,min_value);
        }
    }

    // generar todas las posibles submatrices m*n;
    //f(matriz) que agregue su valor al vector values;
    // sort(values.begin(),values.end());
    //cout<<values[0];


    cout<<max_value-min_value;
}

//10 pts