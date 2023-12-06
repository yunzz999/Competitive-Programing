#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int>inicial(4);
    vector<int>final(4);

    for(int i=0;i<4;i++){
        cin>>inicial[i];
    }

    for(int i =0;i<4;i++){
        cin>>final[i];
    }

    int min_mov=0;

    for(int i=0;i<4;i++){
        if(abs(inicial[i]-final[i])>5){
            min_mov+=min(9-final[i]+inicial[i],9-inicial[i]+final[i]+1);
        }
        else{
            min_mov+=abs(inicial[i]-final[i]);
        }
    }
    cout<<min_mov<<"\n";
}

// Resuelto parcialmente (75 pts)