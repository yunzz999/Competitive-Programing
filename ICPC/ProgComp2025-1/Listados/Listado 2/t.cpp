#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> is_prime(n + 2, 1);
    is_prime[0] = is_prime[1] = 0;

    // Correct Sieve of Eratosthenes
    for (int i = 2; i * i <= n + 1; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n + 1; j += i) {
                is_prime[j] = 0;
            }
        }
    }

    // Check if there's any composite
    bool has_composite = false;
    for (int i = 2; i <= n + 1; ++i) {
        if (!is_prime[i]) {
            has_composite = true;
            break;
        }
    }

    int k = has_composite ? 2 : 1;
    cout << k << "\n";

    // Output colors for each price
    for (int i = 2; i <= n + 1; ++i) {
        cout << (is_prime[i] ? 1 : 2) << " ";
    }
}