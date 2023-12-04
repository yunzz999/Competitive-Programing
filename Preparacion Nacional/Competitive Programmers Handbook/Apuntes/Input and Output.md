***

## Estructura básica de un programa

```cpp
#include <bits/stc++.h>
using namespace std;

int main(){
	// code here
}
```

***
## Input y Output

El input y output de un programa suele ser de la siguiente forma 

```cpp
int a ,b 
string x
cin>> a >> b >> x;
```

Este tipo de código siempre funciona asumiendo que hay una linea o separador de linea entre cada entrada

A veces el input genera cuello de botella por lo que se recomienda utilizar lo siguiente para optimizar el código

```cpp
ios::sync_with_stdio(0);
cin.tie(0);
//buscar para que sirve especificamente
```

Además 
notar que "\n" funciona mejor que endl

Leer toda la linea del input
```cpp
string s;
getline(cin,s);
```

Cuando no se sabe cuantos datos tendrá la entrada se suele usar
```cpp
while(cin>>x){
	//code
}
```

```cpp
long long a = 1e-9
#typedef long long ll;
ll b = 1e-10
#typedef vector <int> vi;
vi numbers;

#define REP(i,a,b) for(int i=a;i<=b;i++)

REP(i,0,n){
	cout<<i;
}
```

***


