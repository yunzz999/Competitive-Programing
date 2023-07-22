#include "bits/stdc++.h"

using namespace std;

unsigned int money,total=0;


int main(){
    cin>>money;
    while(money>=500){
        total+=1000;
        money-=500;
    }
    while(money>=5){
        total+=5;
        money-=5;
    }
    cout<<total;
}

//complejidad O(n)
