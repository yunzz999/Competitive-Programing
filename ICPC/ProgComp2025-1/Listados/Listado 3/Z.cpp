#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N; 
    int M, S;
    cin >> N >> M >> S;

    vector<ll> prefix(S+1, 0);
    ll sum = 0;
    for(int i = 1; i <= S; i++){
        ll x; 
        cin >> x;
        sum += x;
        prefix[i] = sum;
    }

    // Para cada resto r, guardaremos índices de prefijos j tales que
    // prefix[j] % N == r, en orden creciente de j
    unordered_map<ll, deque<int>> buckets;
    buckets.reserve(S * 2);
    buckets[0].push_back(0);  
        // caso de subarray [1..i] divisible por N

    ll bestSum = -1;
    int bestL = -1, bestR = -1;

    for(int i = 1; i <= S; i++){
        ll r = prefix[i] % N;
        if (r < 0) r += N;

        auto &dq = buckets[r];

        // 1) Expulsa de la cabeza los j tan viejos que i - j > M
        while(!dq.empty() && i - dq.front() > M)
            dq.pop_front();

        // 2) Si queda al menos uno, el mejor j para maximizar prefix[i]-prefix[j]
        //    es el primero (menor j)
        if(!dq.empty()){
            int j = dq.front();
            ll sumaSegmento = prefix[i] - prefix[j];
            int L = j + 1, R = i;
            // Actualiza si es mejor, o si empata y tiene inicio más temprano
            if (sumaSegmento > bestSum ||
               (sumaSegmento == bestSum && L < bestL)) {
                bestSum = sumaSegmento;
                bestL = L;
                bestR = R;
            }
        }

        // 3) Inserta el índice i como nuevo candidato para este resto
        dq.push_back(i);
    }

    if (bestL == -1)
        cout << "-1 -1\n";
    else
        cout << bestL << " " << bestR << "\n";

    return 0;
}
