#include <iostream>
#include <vector>
using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;

    int len = num1.length();
    vector<int> res(len, 0);

    // Comparamos los dígitos de los dos números y escribimos 1 en la respuesta si son diferentes, 0 si son iguales.
    for (int i = 0; i < len; i++) {
        if (num1[i] != num2[i]) {
            res[i] = 1;
        }
    }

    // Imprimir la respuesta final.
    for (int i = 0; i <len; i++) {
        cout << res[i];
    }
    cout << endl;

    return 0;
}
