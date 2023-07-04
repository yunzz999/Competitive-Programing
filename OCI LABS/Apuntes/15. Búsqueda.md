****
La búsqueda es otro de los grandes problemas de la informática.
Existen varias soluciones que abordan el problema con diferentes enfoques, pero todas tienen el punto en común que se realizan sobre datos ordenados.

***
## Búsqueda Lineal

Consiste en buscar un elemento , recorriendo todas las posiciones del arreglo.
**Complejidad: O(n)

***
## Búsqueda Binaria

La búsqueda binaria es un algoritmo super eficiente para realizar búsqueda sobre datos ordenados , la cual tiene una **Complejidad de O(log(n))

El algoritmo consiste en posicionarnos en la mitad del arreglo o vector y realizar la pregunta , El numero que estoy buscando es mayor o menor que este elemento?.
Con esta pregunta descartaremos la mitad de los elementos de nuestro arreglo y nos quedaremos con la mitad en la que podría estar nuestro numero.

## Implementación en código

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> numeros = {2,5,7,8,9,12,41,71,99}
	int medio,inferior=0,superior=numeros.size()-1;
	int buscando=71,encontrado=0;
	while(inferior!=superior){
		medio=(inferior+superior)/2;
		if(buscando == numeros[medio]){
			cout<< "Encontrado en la posicion : "<<medio<<endl;
			inferior=superior; encontrado=1; 
		}
		else if(buscando < numeros[medio]){
			superior=medio-1;
		}
		else{
			inferior=medio+1
		}
	}
	if (encontrado==0)cout<<"Elemento no encontrado"<<endl;
	return 0;
}
```

***
# Búsqueda binaria en la librería STL

Al igual que en el ordenamiento , la librería STL tiene funciones que realizan la búsqueda binaria , estas funciones poseen una **complejidad: O(log(n))**

Existen 3 métodos que aplican la búsqueda binaria: 
- **Binary Search:** aplica la búsqueda binaria y busca el numero, retorna verdadero si lo encuentra en caso contrario retorna falso
- **Upper bound:** aplica la búsqueda binaria y busca el numero , retorna un iterador que apunta a la siguiente posición donde debería estar el numero, Si hay números repetidos te entrega el de mas a la **derecha**
- **Lower bound :** aplica búsqueda binaria y busca el numero, retorna un iterador que apunta donde esta el numero si es que esta, si no retorna lo que haría el **upper bound**. Si hay números repetidos te entrega el de mas a la **izquierda**
***
## Implementación en Código

### Binary Search

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v={1,2,2,3,4};
	if(binary_search(v.begin(),v.end(),3)){
		cout<<"Se encontro el numero 3"<<endl;
	}
	else{
		cout<<"No se encontro el numero 3"<<endl;
	}
	return 0;
}
```

## Upper Bound

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int>::iterator up;
	vector <int> v = {1,2,2,3,4};
	
	up=upper_bound(v.begin(),v.end(),2);
	cout<<"El numero"<<*up;
	cout<<"Esta en la posicion ";
	cout<<up-v.begin()<<endl;
	return 0;
}
```

## Lower Bound

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int>::iterator low;
	vector <int> v ={1,2,2,3,5};
	low = lower_bound(v.begin(),v.end(),2);
	if(*low==2){
		cout<<"El numero "<<*low<<endl;
		cout<<"esta en la posicion ";
		cout<< low - v.begin()<<endl;
	}
	else{
		cout<<"El numero 2 no se encontro"<<endl;
	}
	return 0;
}
```