#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> words(n); //crea un vector de tamaño n
    for (int i = 0; i < n; i++) {
        cin >> words[i]; //añade las palabras en base a su 'index'
    }
    
    bool found = false; //variable ocupada para determinar si es ingles
    for (int i = 0; i < n; i++) {
        string word = words[i]; //automatiza el codigo
        if (word == "and" || word == "not" || word == "that" || word == "the" || word == "you") {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "Yes";
    } else {
        cout << "No" ;
    }
    
    return 0;
}

