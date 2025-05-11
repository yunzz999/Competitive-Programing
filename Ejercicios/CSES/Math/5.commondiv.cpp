#include <bits/stdc++.h>
using namespace std;
 
int main() {
    const int M= 1000000;
    int n;
    cin >> n;
    vector<int> freq(M+1, 0);
    int m1= -1;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x>m1){
            m1=x;
        }
        freq[x]++;
    }
 
 
    int sol = 1;
    for(int d = m1; d >= 1; d--){
        int div = 0;
        for(int multiplo=0; multiplo <= m1; multiplo += d){
            div += freq[multiplo];
            if(div >= 2) {
                sol = d;
                break;  
            }
        }
        if(div >= 2) {
            break;  
        }
    }
    cout<<sol<<endl;
}