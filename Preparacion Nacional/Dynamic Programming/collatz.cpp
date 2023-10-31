#include <bits/stdc++.h>
using namespace std;

vector <int> steps(1000000,0);

void collatz(int n){
    int pasos=1;
    int temp=n;
    while(n!=1){
        if(steps[temp]!=0){
            steps[n]=steps[temp]+pasos;
            break;
        }
    }
}


int main(){

}