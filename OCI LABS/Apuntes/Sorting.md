El problema del ordenamiento es uno de los problemas mas estudiados en informática. Este problema consiste en ordenar datos bajo algún criterio que definamos.
***
# Bubble Sort

Es una de las soluciones mas simples al problema de ordenamiento, ya que tiene un enfoque de *fuerza bruta

**Complejidad: O(n^2).

**Lógica:** por cada par de elementos consecutivos , se van a comparar e intercambiar sus lugares dependiendo del criterio de ordenamiento que hayamos definido , este proceso se repite hasta que nuestro vector o arreglo este ordenado

Se le denomina Bubble sort (ordenamiento de burbuja) , ya que el numero mas grande siempre ocupa la ultima posición luego de terminar la primera iteración asimilándose al comportamiento de las burbujas , es decir que los números mas grandes "van subiendo como burbujas"


## Implementación en código

```cpp
#include <bits/stdc++>
using namespace std;

int main(){
	vector <int> numeros ={7,9,2,7,5};
	int i,j,tmp;
	for(i=0;i<numeros.size(),i++){
		for(j=0;j<numeros.size()-i-1;j++){
			if(numeros[j]>numeros[j+1]){
				tmp=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=tmp;
			}
		}
	}
	for(i=0;i<numeros.size();i++)cout<<numeros[i]<<endl;
	return 0;
}

```
***
# Insertion sort 

Insertion sort es otra de las soluciones "simples" al problema de  ordenamiento , también tiene un enfoque de fuerza bruta es decir ocupa el poder de computo del ordenador.

**Complejidad: O(n^2)

**Lógica** : vamos a considerar que el subarreglo que va desde 0 hasta i-1 como ordenado.

Por cada elemento en la posición i-esima, vamos a insertarlo en la posición que le corresponde en el subarreglo ordenado

## Implementación en codigo

```cpp
#include <bits/stdc++>
using namespace std;

int main(){
	vector <int> numeros ={7,9,2,7,5}
	int i ,j,tmp;
	for(i=0;i<numeros.size();i++){
		j=i-1;
		tmp=numeros[i];
		while(j>=0 && numeros[j]>tmp){
			numeros[j+1]=numeros[j];
			j--;
		}
		numeros[j+1]=tmp
	}
	for(i=0;i<numeros.size();i++){
		cout<<numeros[i]<<" ";
	}
	return 0;
}
```

# Selection Sort 

El nombre proviene de que si uno tiene un arreglo de n números, busca cual es el menor, lo selecciona y lo pone al principio

Luego se repite el  proceso, pero ahora con n-1 numeros, ya que el numero ya fue puesto donde debia.

## Implementacion en codigo

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int>numeros={2,5,7,8,9};
	int i,j,dondeEstaELMinimo;
	for(i=0;i<n-1;i++){
		dondeEstaElminimo=i;
		for(j=i+1;j<n;j++){
			if(numeros[j]<numeros[dondeEstaElMinimo]){
				dondeEstaElMinimo=j;
			}
		}
		int temp=numeros[dondeEstaElMinimo];
		numeros[dondeEstaElMinimo]=numeros[i];
		numeros[i]=numeros[dondeEstaElMinimo];
	}
	for(i=0;i<n;i++){
		cout<<numeros[i]<<" ";
	}
	return 0;
}
```

complejidad O(n^2)