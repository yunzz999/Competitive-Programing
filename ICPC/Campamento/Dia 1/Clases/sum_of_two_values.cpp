#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    for (int i = 0; i<n;i++){

    }

    map<int,int> mp;
    for(int  i =0;i<n;i++){
        int actual = arr[i];
        int buscar = x-arr[i];
        if(mp.find(buscar)!= mp.end()){
            cout<<i+1<<" "<<mp.[buscar]+1<<endl;
        }
    }   
}

// Falta terminar el codigo