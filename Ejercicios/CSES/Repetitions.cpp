#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int longestSequence = 1; // Al menos hay una secuencia de longitud 1
    int currentSequence = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            currentSequence++;
        } else {
            longestSequence = max(longestSequence, currentSequence);
            currentSequence = 1;
        }
    }

    longestSequence = max(longestSequence, currentSequence); 
    // Considerar la última secuencia

    cout << longestSequence << endl;

    return 0;
}

