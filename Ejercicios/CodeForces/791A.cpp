#include <bits/stdc++.h>
using namespace std;

int main(){
    int limak,bob;
    cin>>limak>>bob;
    int years = 0 ;
    while(limak<=bob){
        limak=limak*3;
        bob=bob*2;
        years++;
    }
    cout<<years;

}