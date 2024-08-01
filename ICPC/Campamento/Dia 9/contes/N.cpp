#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while(t--){
        string s, c = "";
        cin >> s;
        for (int i = 0; i < 3 && i < s.size(); i++) {
            c += tolower(s[i]);
        }
        if(c == "yes"){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
