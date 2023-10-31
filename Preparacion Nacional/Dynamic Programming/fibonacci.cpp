#include <bits/stdc++.h>
using namespace std;

int fib(int n){
		int f[n + 2];
		int i;

		f[0] = 0;
		f[1] = 1;

		for (i = 2; i <= n; i++) {
			f[i] = f[i - 1] + f[i - 2];
		}
		return f[n];
}


int main()
{
    int number=0;
    int indice=3;
    long long suma=0;
    while(number<4*10e6){
        suma+=fib(indice);
        number=fib(indice);
        indice+=3;
    }
    cout<<suma;
}


