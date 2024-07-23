#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n,k,aux, cuad, amp;
    for (int lol = 0; lol<t; lol++){
        cin>>n>>k;
        aux=0;
        cuad=0;
        amp=1;
        for (int i =0; i<k; i++){
            cuad = cuad + amp;
            if (aux == 1) {
                amp++;
                aux = 0;
            } 
            else {
                aux =1;
            }
        }
        cout << cuad << endl;
    }
}