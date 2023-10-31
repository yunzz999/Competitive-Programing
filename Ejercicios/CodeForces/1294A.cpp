#include <bits/stdc++.h>
using namespace std;

string solve(int a, int b, int c, int n) {
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    int suma = v[2] - v[0] + v[2] - v[1];
    
    if ((n - suma) % 3 == 0 && (n - suma) >= 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        cout << solve(a, b, c, n) << "\n";
    }
}
