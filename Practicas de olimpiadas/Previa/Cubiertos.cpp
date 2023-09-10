#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, compra_a, venta_a, b, compra_b, venta_b;
    cin >> a >> compra_a >> venta_a;
    cin >> b >> compra_b >> venta_b;

    int distancia = abs(a - b);
    int menor = INT_MAX; // Inicializa menor con un valor máximo

    for (int i = 0; i <= distancia; i++) {
        int costo_a = i * venta_a + max(0, (distancia - i)) * compra_b;
        int costo_b = i * venta_b + max(0, (distancia - i)) * compra_a;
        menor = min(menor, min(costo_a, costo_b));
    }

    cout << menor;

    return 0;
}


// 40 puntos xd
// No entiendo pq no sirvio xd