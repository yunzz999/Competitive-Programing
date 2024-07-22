#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void s(int n){
    string craft_n="1";
    int e = 1;
    int number=0;
    int sum=0;
    while(true){
        if(number+stoi(craft_n)>=pow(10,e)){
            craft_n+="1";
            number=0;
            e++;
        }
        if(n>=number+stoi(craft_n)){
            number+=stoi(craft_n);
            sum+=1;
        }
        else{
            cout<<sum<<endl;
            break;
        }

    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        s(n);
    }
}

//Funciono (nose como)