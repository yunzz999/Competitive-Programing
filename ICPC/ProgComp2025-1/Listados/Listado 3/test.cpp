#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 N;
    cin >> N;

    // Calculamos el mayor a tal que 2^a <= N
    int maxA = 0;
    while ((1ULL << (maxA + 1)) <= (unsigned long long)N) {
        ++maxA;
    }

    int64 total = 0;
    // Para cada a = 1..maxA, contamos cuántos b cumplen 2^a * b^2 <= N
    for(int a = 1; a <= maxA; ++a){
        // Cota superior para b es sqrt(N), la aproximamos con long double
        int64 high = (int64)(sqrtl((long double)N)) + 1;
        int64 low = 1, best = 0;

        // Búsqueda binaria de b en [1..high]
        while(low <= high){
            int64 mid = (low + high) >> 1;
            // Para evitar overflow: usamos __int128
            __int128 val = (__int128(1) << a) * mid * mid;
            if(val <= N){
                best = mid;        // mid es válido, podemos subirlo
                low = mid + 1;
            } else {
                high = mid - 1;    // mid es muy grande, bajamos
            }
        }

        total += best;
    }

    cout << total << "\n";
    return 0;
}
