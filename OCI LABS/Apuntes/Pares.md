## Que son?
Son una estructura de C++ que permite almacenar **dos** elementos.

Estos se almacenan segun:
- Primer elemento
- Segundo elemento
---
```cpp
#include <utility> //esto es solo una manera de incluirlos (existen mas)

pair <char,int> miPar;
```
*siendo pair el nombre de la estructura, char el tipo de dato del primer elemento e int el del segundo y "miPar" el nombre del par*

## Ejemplo
```cpp
#include <utility>
#include <iostream>

using namespace std;

int main(){
    pair <int,char> par;

    par.first=2; //se define el primer elemento
    par.second="A"; // se define el segundo elemento

    cout<<"Primer elemento "<< par.first <<endl;
    cout<<"Segundo elemento "<< par.second <<endl;

    return 0;
}


```