***
Hasta el momento los algoritmos de ordenamiento que habíamos visto tenían complejidad O(n^2), pero existen algoritmos con mejores tiempos de complejidad?.... si!

- Merge Sort
- Quick Sort

Este es un campo muy estudiado en informatica debido a su gran uso.
***
## Sort en la libreria STL

Este algoritmo tiene una complejidad de O(n log (n)) el cual usa un algoritmo bastante complejo llamado "introspective sort"


```cpp
#include <bits/stdc++.h>
// tambien se puede incluir usando ,algorithm>

int main(){
	int i;
	vector <int> v = {9,3,4,7,8};
	sort(v.begin(),v.end()); //ordenamiento del vector v de menor a mayor 
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	char arr []= {'b','s','c','z','A'};
	sort(arr,arr+5);
	for(i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
```

y si quiero ordenar mi vector de otra manera?...

```cpp
#include <bits/stdc++.h>
	bool mayor_que(int a , int b){
		if(a>b){
			return true;
		}
		else{
			reutrn false;
		}
	}

int main(){
	int i;
	vector <int> v = {9,3,4,7,8};
	sort(v.begin(),v.end(),mayor_que);
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
```

En el codigo anterior la funcion "menor_que" , clasifica los numeros recibidos desde el vector , en caso de que la funcion retorne verdadero , el elemento a ira a la izquerda del elemento b y en caso contrario el elemento a ira a la derecha del valor b.

Es decir con esto acabamos de crear un algoritmo que ordena de mayor a menor.