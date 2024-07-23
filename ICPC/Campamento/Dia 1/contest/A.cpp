#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p,k;
    int i=0;
    cin>>n>>k;
    while (true){
        if(pow(2,i)>n){
            if(pow(2,i)-n>pow(2,i-1)-n){
                p=i-1;
                break;
            }
            else{
                p=i;
                break;
            }
        }
        else{
            i++;
        }
    }
    
}

