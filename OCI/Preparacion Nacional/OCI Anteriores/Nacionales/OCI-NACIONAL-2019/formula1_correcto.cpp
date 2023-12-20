#include <iostream>
#include <vector>
using namespace std;

void solve(const vector<int>& prefix_sum, int l, int r) {
    // La suma total entre los índices l y r es prefix_sum[r] - prefix_sum[l]
    cout << prefix_sum[r] - prefix_sum[l] << endl;
}

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
    }

    while (t--) {
        int l, r;
        cin >> l >> r;
        solve(prefix_sum, l, r);
    }

    return 0;
}

// resuelto 100pts