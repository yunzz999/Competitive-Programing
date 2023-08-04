#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, numero, min_cantidad=0, anterior = 0;
  cin >> n;
  vector<long long> hermanos;
  
  for (long long i = 0; i < n; i++) {
    cin >> numero;
    hermanos.push_back(numero);
  }
  
  for (long long i = 0; i < n; i++) {
    if (hermanos[i] < anterior) {
      min_cantidad += anterior - hermanos[i];
      hermanos[i] += anterior - hermanos[i];
    }
    anterior = hermanos[i];
  }
  
  cout << min_cantidad<<endl;
  return 0;
}