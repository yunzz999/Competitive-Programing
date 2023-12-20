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

int count_divisors(int n){
    int count =2;
    int raiz = sqrt(n)+1;
    for(int i=2;i<raiz;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed);
  cout.precision(10);
  
    triangular_numbers(1e7);

    //Buscar como mejorar complejidad algoritmica
  
  return 0;
}