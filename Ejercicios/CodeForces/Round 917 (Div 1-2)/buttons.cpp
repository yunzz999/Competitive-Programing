#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(10);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool difx = false, dify = false;

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            if (a > 0) {
                difx = true;
            } else if (a < 0) {
                difx = difx && true;
            }

            if (b > 0) {
                dify = true;
            } else if (b < 0) {
                dify = dify && true;
            }
        }

        cout << (difx && dify ? "NO" : "YES") << endl;
    }

    return 0;
}
