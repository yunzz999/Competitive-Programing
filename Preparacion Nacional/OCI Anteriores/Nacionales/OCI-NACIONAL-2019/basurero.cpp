#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> inicial(4);
    vector<int> final(4);

    for (int i = 0; i < 4; i++) {
        cin >> inicial[i];
    }

    for (int i = 0; i < 4; i++) {
        cin >> final[i];
    }

    int min_mov = 0;

    for (int i = 0; i < 4; i++) {
        int diff = abs(inicial[i] - final[i]);
        min_mov += min(diff, 10 - diff);
    }

    cout << min_mov << "\n";

}

//resuelto 100 pts