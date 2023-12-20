#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep_(i, k, n) for (int i = k; i < n; ++i)
typedef long long ll;


set <int> s;

bool is_triangular(int n){
    if(s.count(n)>0){
        return true;
    }
    else{
        return false;
    }
}


void triangular_numbers(int n){
    int sum=1;
    rep_(i,2,n){
        s.insert(sum);
        sum+=i;
    }
}

int count_divisors(int numero) {
    int contador = 0;
    int limite = sqrt(numero);

    for (int i = 1; i <= limite; ++i) {
        if (numero % i == 0) {
            contador += 2;  // Contar tanto i como n/i

            // Si i es la raíz cuadrada exacta, ajustar el contador
            if (i == limite && numero / i == i) {
                contador--;
            }
        }
    }

    return contador;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.precision(10);
  
    triangular_numbers(1e8);
    cout<<"Creada la lista de numeros... "<<endl;
    // 8.648.640
    //Buscar como mejorar complejidad algoritmica
    int numero =2;
    for(int i=1e7;i<1e8;i++){
        if(count_divisors(i)>500){
            numero=i;
            cout<<numero<<": "<<count_divisors(i)<<" ";
            if(is_triangular(i)){
                cout<<"y"<<endl;
            }
            else{
                cout<<"n"<<endl;
            }
        }
    }    
    return 0;
}


//optimizar