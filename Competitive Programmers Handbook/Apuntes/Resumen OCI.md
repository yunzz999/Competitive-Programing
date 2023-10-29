

---

# 1.1 Tipos de Datos

Los datos son los elementos que se encuentran en el día a día , como los números , letras ,etc. Los tipos de datos nos permiten manejar mejor estos elementos.

En C++ existen diferentes **tipos de datos**:

*Enteros : 1 , 4 , 10 , 123 , 144 …

*Decimales : 1.0 , 2.3 , 3.1416 ...

*Caracteres : 'A' , 'B' , '$' , ')' ...

*Booleanos : true , false
***

## Rangos

![[Pasted image 20230705005654.png]]
***

## Unsigned

Al agregar la palabra **unsigned** a los tipos numéricos estos podrán almacenar solo valores positivos y por lo tanto el rango aumenta.

```cpp
unsigned int // 4.294.967.295
```
***
## Float v/s Int

Si se intenta almacenar 2,5 en alguna variable de tipo  entero entonces entonces el numero se truncara , quedando almacenado el numero 2

***
## Float v/s Double

El tipo double tiene mas precisión que float , a su vez long double tiene mas precisión que double.

***
## Tipo char

Todo carácter tiene su propia codificación segun la tabla *ASCII* donde un entero representa un caracter.

***
## Tipo Bool

Los datos de tipo Bool almacenan el valor verdadero (*true*) o falso (*false*).
     *Esto equivale a los valores que almacenan los bits es decir  0 o 1*


---
# 1.2 Strings

*Las strings nos sirven para almacenar cadenas de caracteres*

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; //definicion de una string
	cin>>s;
}
```

***
## Métodos

```cpp
//LARGO
s.lenght()
```

```cpp
//Agregar
s.append(s2)
```

```cpp
//Suma 
s1+=s1
s1+s2
```

```cpp
//Posicion
s[x] // => donde x es un indice de posicion
```

---
# 1.3 Condicionales

Los condicionales son estructuras con las cuales podemos definir diferentes caminos o flujos que puede tomar nuestro programa

![[Pasted image 20230705011227.png]]

Las condiciones son preguntas que podemos definir usando *operadores lógicos* y de *comparación* en C++

***
## Sintaxis

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	if(condicion1){
		codigo1
	}
	else if (condicion2){
		codigo2
	}
	else if(condicion3){
		codigo3
	}
	else{
		codigo4 //se ejecuta en caso de que todas las condiciones anteriores sean false
	}
}
```

***

## Operadores lógicos 

```cpp
X==Y // Revisa si x es igual y
X!=Y // Revisa si x es distinto y
X<Y // Revisa si y es mayor x
X<=Y // Revisa si y mayor o igual x
X>Y // Revisa si x mayor y
X>=Y // Revisa si x mayor o igual y
X&&Y // Operacion AND
X||Y // Operacion OR
!X // Operacion NOT
```


---

# 1.4 Loops

Los ciclos o loops permiten repetir un bloque de instrucciones varias veces mientras que la condición impuesta sea verdadera.

***
## While

El ciclo continuara ejecutándose mientras la condición sea verdadera.

```cpp
while(i<10){ //mientras i<10 se ejecutara codigo1
	codigo1 ;
}
```

***
## For 

Parte con un contador el cual posee un valor inicia. Si la condición es verdadera se ejecuta el ciclo y se realiza una operación sobre el contador 

```cpp
for(int i =0;i<10;i++){ //el contador comienza en 0 y por cada iteracion sumara 1
	codigo1 ;
}
```

---

# 1.5 Funciones

Las funciones nos permiten encapsular código , para que las podamos usar bajo un alias sin tener que escribir todo el código nuevamente.

```cpp
int sumar(int num1 , int num2){
	return num1+num2;
}
```

***

## Estructura

```cpp
tipo nombre (parametro1 , parametro2){
	codigo1
	return ; 
}
```

---

# 2.1 Arreglos y Vectores

***
## Arreglos 

**¿Qué son? : Los arreglos son grupos finitos y homogéneos , ordenados que contienen elementos de distintos tipos

![[Pasted image 20230703200720.png]]

Existen 2 tipos de arreglos , los estáticos  y los dinámicos :

### Estáticos
Los **arreglos estáticos** tienen un largo fijo durante todo  el tiempo de ejecución del programa , esto quiere decir que su tamaño **NO** se puede aumentar ni disminuir

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	int enteros[5]={1,2,3,4,5} //Arreglo estatico de largo 
}
```

Por lo tanto como se ve arriba un arreglo esta definido por 
```cpp
tipo => nombre [largo] ;
```

### Dinámicos 
Los **Arreglos dinámicos** tienen un largo **variable** durante toda la ejecución del programa. Esto quiere decir que su tamaño puede aumentar o disminuir.

## Vectores
Los **vectores** son una implementación de los arreglos dinámicos dentro de la librería **STL** de C++ . 

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> enteros; // vector sin tamaño incial
	vector <int> enteros2(10); // vector con tamaño inicial = 10

	int n;
	cin>>n;
	
	vector <int> ceros(n,0); // vector con n elementos inciales todos = 0
}
```

Se puede acceder y modificar los valores de los vectores de igual manera que en los arreglos.

## Métodos de Vectores

**Push back**: Agrega un elemento al final del vector
**Pop_back**: Elimina el ultimo elemento del vector 
**Size**: Obtiene el tamaño del vector
**Insert**: Inserta un elemento en la posición especificada
**Erase**: Elimina un elemento en la posición especificada

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> enteros; 
	enteros.push_back(3);// Agrega un elemento al final del vector
	cout<<enteros.size(); // Devuelve el tamaño del vector
	enteros.pop_back(); // Elimina el elemento al final del vector
	enteros.insert(enteros.begin(),3); //inserta el numero 3 al principio del vector
	enteros.erase(enteros.begin()); // elimina el numero en la primera posicion
	
}
```

*Insert y erase pueden demorarse si el vector es muy largo*

---

# 2.2 Complejidad Computacional

**
La **Complejidad computacional** trata de clasificar problemas computacionales de acuerdo a su dificultad inherente. 

*¿Cuántos recursos computacionales requiere mi programa para resolver un problema?*

Una rama de la complejidad computacional se conoce como **Análisis de algoritmos**. En esta se entregan estimaciones teóricas de recursos que necesitan los algoritmos.

Algunos de estos recursos estudiados son el **tiempo** que se demora y la **memoria** que utiliza un algoritmo

***
## Análisis de Algoritmos

Se considerara que una instrucción del algoritmo es una **unidad de tiempo** .

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Hola mundo!"<<endl;  // 1 unidad de tiempo
	return 0;  // 1 unidad de tiempo
}
```

Por lo tanto el algoritmo anterior posee 2 unidades de tiempo


```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%2==0){
		cout<<"par"<<endl;
	}else{
		cout<<"impar"<<endl;
	}
	return 0;
}
```

Hacer la comparación toma 1 unidad de tiempo, además se ejecute el if o else , las instrucciones que estos contienen tomaran 1 unidad de tiempo.

***
## Big O

Para estimar , se utilizara el concepto de la notación **O** (**big-O**).
La notación permite indicar la cantidad estimada de unidades de tiempo que se demorara el algoritmo.

### O(n)

Quiere decir que un algoritmo demora **n** unidades de tiempo, donde **n** es **variable** y depende de la entrada

### O(1)

Quiere decir que un algoritmo se toma una cantidad de unidades de tiempo que no depende de la entrada 


***

## Utilidad para la programación competitiva

En general , los problemas de programación tienen un tiempo máximo de ejecución para que un problema sea **aceptado** por el juez. Por lo que el análisis del tiempo del algoritmo es algo muy útil.

![[Pasted image 20230704002131.png]]

![[Pasted image 20230704002146.png]]

***

# Complejidad Computacional 
##          El arte de programar

La complejidad en el tiempo nos ayuda a elegir el algoritmo mas eficiente para realizar una tarea, para saber como crece un algoritmo debemos analizar su código . De esta manera *el algoritmo que crece menos en el tiempo es **mas rápido.**
 
## Notación asintótica

**¿Por qué se denomina asintótica?**
Se denomina notación asintótica ya que lo que describe la notación es el límite de un algoritmo, una aproximación de cómo será su complejidad en el tiempo. La notación asintótica grafica el comportamiento del límite superior a esta función la llamaremos *g(n)* y *T(n)* será la función que describe nuestro algoritmo.

*El limite superior de  **X** cumpliendo las condiciones **Y** y con la forma **Z** 

***
## Big-O

### *g(n) * c >= T(n)*

***
## Little-O

### *g(n) * c > T(n)*

***
## Análisis de Algoritmos

Para obtener la notación asintótica de un algoritmo, debemos analizarlo. Si queremos obtener su complejidad en **Big-O** a través de una función *T(n)* que nos describe el algoritmo, solo tomaremos la función de mayor crecimiento. Por ejemplo:
$$T(n) = 2 \cdot n +1 \rightarrow O(n)$$
*Ya que en la función *T(n)* la expresión con mayor crecimiento es  *n*

En la siguiente imagen se muestran las funciones *g(n)* en orden creciente de complejidad.

![[Pasted image 20230705141448.png]]

Existen mas notaciones pero para programación competitiva la mas usada es Big-O

---

# 3.1 Pilas y Colas


## ¿Qué son las Pilas?
Las pilas son una estructura de datos lineal , al igual que los arreglos y vectores. Pero a diferencia de estos, las pilas tienen un comportamiento LIFO (Last-In First-Out). 

Esto quiere decir que el ultimo elemento que ingresa a la pila, sera el primero en salir de la misma.

*Las pilas se pueden entender como una torre de platos.*
***
## Pilas en C++

### *Incluirlas*
```cpp
 #include <stack>

 stack <int> pila;
 ```
  *Siendo Stack el nombre de la estructura , int el tipo de dato y "pila" el nombre de la pila.*

***
## Funciones de una Pila

### 1. **Push** : Agregar un elemento a la pila

### 2. **Pop** : Quitar un elemento de la pila

### 3. **Top**:  Ver el elemto que esta arriba de la pila
### 4. **Empty**: Nos dira si la pila esta vacia
### 5. **Size**: Nos entregara la cantidad de elementos de nuestra pila

***
## Ejemplo
```c++
#include <iostream>
#include <stack>
using namespace std; 

int main(){
    stack <int> pila; // se define una pila de enteros

    pila.push(5); // agrega el elemento "5" a la pila

    cout<< pila.top()<<endl; // revisa el elemento "mas arriba" de la pila

    cout<<pila.size()<<endl; // tamaño de la pila

    pila.pop(); // elimina el elemnto de "mas arriba" de la pila

    cout<<pila.empty()<<endl; // revisa si la pila esta vacia

    return 0;
}
```


## Colas


Falta xd


--- 

# 3.2 Iteradores

## ¿Que son los Iteradores?
Almacenan donde se encuentra un valor de un vector, conjunto o map.

*No contienen el valor , solo saben su dirección de memoria*
***
## Ejemplos (Vectores)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v(3);
    v[0]=0;v[1]=1;v[2]=2;

    vector<int>::iterator itr;

    itr = v.begin();
    
    cout <<*itr <<endl;

    *itr+=1;

    cout<<*itr<<" "<<v[0]<<endl;

    itr+=2;

    cout<<*itr<<" "<<v[2]<<endl;
    return 0;
}
```

--- 

# 3.3 Conjuntos

## ¿Que son los conjuntos? 
Tipo de estructura de datos la cual se encarga de almacenar "unicos", es decir no acepta repeticiones.

***
## Conjuntos en C++

### *Incluirlos*
```cpp 
#include <set>
```
### *Crear un nuevo Conjunto*
```cpp 
set <int> miConjunto;
```
*Siendo set el nombre de la estructura, int el tipo de dato y "miConjunto" el nombre*
***
## Funciones de un Conjunto

### **1. Insert:** Agregar un elemento al conjunto
-  *Iterador al elemento*
-  *Un booleano que nos indica si el elemento  se inserto o no*
- *Complejidad **log(n)***
### **2. Erase:** Elimina un elemento del conjunto
- *Complejidad **log(n)** donde n es el tamaño del set*
### **3. Empty:** Nos dira si el conjunto esta vacio

### **4. Size:** Cantidad de elementos del conjunto

### **5. Clear:** Elimina todos los elementos del conjunto

### **6. Find:** Retorna un iterador al elemento

***
## Ejemplo

```cpp
#include <iostream>
#include <set>
using namespace std;

int main(){
  set <int> edades; //crea un conjunto llamado "edades"
  set <int>::iterator i; // se crea un iterador que 

  edades.insert(17); //inserta el numero 17 verificando si esta en el conjunto
  edades.insert(16);
  edades.insert(14);
  edades.insert(15);
  edades.insert(15);
  edades.insert(17);
  edades.insert(18);
  for(i = edades.begin(); i != edades.end(); i++){
      cout << *i << endl;//puntero hacia el valor del iterador
  }
  
  return 0;
}   
```

---

# 3.4 Pares

## ¿Que son?
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

---

# 3.5 Maps

## ¿Para que sirven ?
los maps sirven para relacionar un identificador o llave con su respectivo valor

Por ejemplo el rut:
- 18061634-9 --> Pepito
  
- 24231937-0  --> Optimus

En la teoria , la estructura que almacena este tipo de relaciones se llama **Hash Table**

---
## Aplicacion en C++

```cpp
#include <map>

map <char,int> miMap;
```
Donde map es el nombre de la estructura , char e int son los tipos de datos del primer y segundo dato respectivamente y "miMap" es el nombre


  
***
# Funciones 

### 1. **Insert**: recibe un pair con la llave y valor a guardar 

```cpp
#include <map>
using namespace std;

main(){
    map <char,int> miMapita;
    miMapita.insert(pair<char,int>("Hola",9))
}
```
### 2. **Erase:** borra un elemento del map por su llave
```cpp
#include <map>
using namespace std;

main(){
    map <char,int> miMapita;
    miMapita.insert(pair<char,int>("Hola",9))
    miMapita.erase("Hola")
```

### 3. **Find:** busca un elemento por su llave y retorna un iterador del map
```cpp
#include <map>
using namespace std;

main(){
    map <char,int> miMapita;
    miMapita.insert(pair<char,int>("Hola",9))
    map<char,int>::iterator itr;
    itr=mapita.find("Hola");
    cout<<"llave "<<itr->first<< "Valor"<<itr->second <<endl; 
```

### 4. **Size:** retorna cuantos elementos hay en el map
```cpp
mapita.size()
```
### 5. **Empty:** indica si el map esta vacio
```cpp
mapita.empty()
```
### 6. **Clear**:  borra todos los elementos dentro del map
```cpp
mapita.clear()
```


---

# 4.1 Sorting

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

*complejidad O(n^2)

---

# 4.2 Sort Nativo

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

---

# 4.3 Busqueda

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

---
# 4.4 Recursividad

## ¿Qué es?

El proceso en el que una función se llama a si misma directa o indirectamente , se llama recursividad y la función correspondiente se llama función recursiva.

Usando un algoritmo recursivo , ciertos problemas se pueden resolver con bastante facilidad , Por ejemplo: 

- Funciones matemáticas
- Torres de Hanói
- Grafos
***
*Al llamarse a si misma esta debe tener definido 2 casos:

#### Caso Base
Sera el momento donde decidirá si dejar de llamarse a si misma 

#### Caso Recursivo
Sera el momento en que decidirá que debe continuar llamándose a si misma

***
## Ejemplos

```cpp
int SUMA(int n){
	if(n==0){
		return 0; //CASO BASE
	}
	else{
		return SUMA(n-1)+n; // CASO RECURSIVO
	}
}
```

***
## Problemas de la Recursividad

Si bien el ejemplo anterior es bastante fácil de entender y de describir matemáticamente , esto no pasara siempre , de hecho muchas veces no podremos describir nuestros algoritmos recursivos como funciones matemáticas.

Otro posible problema podría ser se hagan muchas llamadas recursivas y que ese numero sobrepase las posibles , lo que dejaría de correr las funciones.

***

# 5.1 Grafos

Los grafos son una estructura de datos **no lineal** , formada por 2 componentes :   *Nodos y  Aristas*

![[Pasted image 20230706004410.png]]

La misma estructura , podemos representarla de forma teórica como dos conjuntos , uno de *Vértices* y otro de *Aristas*.

![[Pasted image 20230706004756.png]]

## Aristas de un grafo

![[Pasted image 20230706004857.png]]

**Dirigido**: Se puede ir desde A hacia B pero no de B hacia A

**No dirigido** :  Se puede ir desde A hacia B como desde B hacia A

***

## Aplicaciones

Una de las aplicaciones de los grafos , son por ejemplo el recorrido del metro , es decir 

![[Pasted image 20230706010051.png]]
*(grafo no dirigido)


Otro ejemplo es un mapa de calles donde las intersecciones serán los *nodos* y las calles serán las *aristas* , de la siguiente manera: 

![[Pasted image 20230706010411.png]]

## Grafo con pesos

A cada arista podemos asignarle un valor , el cual podemos entender como el costo que se debe pagar por pasar por esa arista , a este valor lo llamaremos peso.

Representando en el caso anterior de las calles por ejemplo  el tiempo en minutos que toma pasar por cada arista

![[Pasted image 20230706010843.png]]

En base al grafo anterior , Cuanta es la mínima cantidad de minutos que me toma ir desde el punto A al D

En este caso la respuesta seria 5 minutos

## Matriz de Adyacencia

Representar los grafos como vimos anteriormente no es la manera mas eficiente de hacerlo , ni representarlo. Para representarlo de mejor manera usamos la *Matriz de adyacencia* 

La *Matriz de adyacencia es una representación mucho mas compacta de todas las relaciones de un grafo*  , las cuales son mas fáciles de representar para un computador como se muestra a continuación: 

![[Pasted image 20230706012358.png]]

La matriz indica un 1 cuando hay conexión entre el nodo columna y el nodo fila .  

Por ejemplo el siguiente grafo esta representado por la siguiente matriz de adyacencia , Notar que para n nodos la matriz será de n * n y que la diagonal de la matriz siempre será  0 , ya que un nodo no puede tener relación consigo mismo.

![[Pasted image 20230706013414.png]]


La matriz se rellena fijándose en la fila del nodo que queremos completar , es decir para saber las conexiones del nodo 0 , nos situamos en la fila de la matriz 0 y luego anotamos en la fila de la matriz que represente el nodo con el que en este caso 0 tiene conexión.

Si tenemos unas coordenadas ( x , y) las cuales tienen asignadas un valor *n* entonces las coordenadas ( y , x ) tendrán el mismo valor n 

*Esto solo pasa cuando tenemos grafos no dirigidos*

***
## Implementación

```cpp
#include <bits/stdc++.h>
using namespace std;

vector < vector <int> > matriz; //Definicion de la matriz

void crear_matriz(int n_nodos){  // Inicializacion de la matriz
	for(int i=0;i<n_nodos;i++){
		vector<int> row(n_nodos,0);
		matriz.push_back(row);
	}
}

void agregar_vecino(int nodo1 , int nodo2){ //Agregar una relacion
	matriz[nodo1][nodo2]=1;
	matriz[nodo2][nodo1]=1;
}

void quitar_vecino(int nodo1 , int nodo2){ //Quitar una relacion
	matriz[nodo1][nodo2]=0;
	matriz[nodo2][nodo1]=0;
}

void print_matriz(){ //imprime la matriz
	int i , j;
	for(i=0;i<matriz.size();i++){
		for(j=0;j<matriz[i].size();j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){  // creando la matriz
	crear_matriz(5);
	agregar_vecino(0,1);
	agregar_vecino(1,2);
	agregar_vecino(1,3);
	agregar_vecino(1,4);
	agregar_vecino(3,4);
	return 0;
}
```

***
## Lista de adyacencia

La lista de adyacencia , corresponde a un vector de vectores. En el que por cada posición se listaran de manera literal , los vecinos que posee un nodo

![[Pasted image 20230706194701.png]]

Se creara un vector de vectores , llamaremos al vector de vectores *main vector* , entonces el vector en la posición *i* del *main vector* representara las conexiones del *nodo i*.

***
## Implementación

```cpp
#include <bits/stdc++.h>
using namespace std;

vector < vector <int> > lista_ad;

void crear_lista(int n){
	for(int i=0;i<n;i++){
		vector <int> nodo= {};
		lista_ad.push_back(nodo);
	}
}

void agregar_vecino(int nodo1,int nodo2){
	lista_ad[nodo1].push_back(nodo2);
	lista_ad[nodo2].push_back(nodo1);
}

void print_lista_ad(){
	for(int i=0;i<lista_ad.size();i++){
		cout<<"Nodo "<<i<<": ";
		for(int j=0;j<lista_ad[i].size();j++){
			cout<<lista_ad[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	crear_lista(5)
	agregar_vecino(0,1)
	agregar_vecino(1,2)
	agregar_vecino(1,3)
	agregar_vecino(1,4)
	agregar_vecino(3,4)
}


```

## Lista v/s Matriz

Ambas representaciones son validas , es decir para implementar grafos podemos usar tanto matrices de adyacencia como listas de adyacencia pero hay que tener en cuenta sus ventajas y desventajas.
***
### Costos

Imprimir matriz$$ print-Matriz \rightarrow O(n^2)$$
Imprimir lista $$ print-lista \rightarrow O(n+m)$$


---

# 5.2 Busqueda en grafos

p¿Cómo recorrer un grafo?
Por ejemplo dado el siguiente grafo , ¿Existe un camino entre 1 y 5?

![[Pasted image 20230706202735.png]]

Para responder esta pregunta existe la *Búsqueda en profundidad* (**Depth First Search o DFS**)
***
## Busqueda en profundidad (DFS)

Este algoritmo parte de un nodo inicial y procede a visitar a sus vecinos , donde por cada uno de sus vecinos repite el proceso hasta que ya no haya nodos por visitar.

Apliquemos este algoritmo partiendo desde el nodo 1 , sus vecinos son los nodos 2 y 3 , seguiremos primero la ruta 3 , ahora hacemos lo mismo , el nodo 3 tiene los vecinos 4 y 5 entonces visitamos el 5 y hemos llegado , pero también podríamos visitar el nodo 4 y luego al nodo 5 , por lo tanto existen 2 soluciones posibles.

*Cuando el algoritmo pasa por un nodo lo marca como visitado y ya no lo vuelve a visitar denuevo* 

![[Pasted image 20230706203641.png]]
*El camino verde marca lo que recorre el DFS*

*Con este algoritmo no es imposible encontrar el camino mas corto desde un nodo hasta otro*
***
## Implementación

¿Qué necesitamos para implementar el algoritmo?

- Un grafo , se pueden usar ambas implementaciones pero es recomendable usar la *lista de adyacencia*
- Un vector que contenga verdadero y falso , verdadero si es que ya fue visitado y falso si es que aun no ha sido visitado
- Un nodo inicial , para comenzar la ejecución del algoritmo

Entonces , que hace el algoritmo :
- Toma el nodo actual y lo marca como visitado
- Luego , aplico un for hacia sus vecinos
- Por cada vecino , pregunto si esta visitado o no 
	- si esta visitado no hago nada
	- si el nodo vecino no esta visitado llamo a la función recursivamente con ese nodo


```cpp
#include <bits/stdc++.h>
using namespace std;

vector < vector <int> > lista_ad;
vector < bool > visitado (lista_ad.size(),false)
void crear_lista(int n){
	for(int i=0;i<n;i++){
		vector <int> nodo= {};
		lista_ad.push_back(nodo);
	}
}

void agregar_vecino(int nodo1,int nodo2){
	lista_ad[nodo1].push_back(nodo2);
	lista_ad[nodo2].push_back(nodo1);
}

void print_lista_ad(){
	for(int i=0;i<lista_ad.size();i++){
		cout<<"Nodo "<<i<<": ";
		for(int j=0;j<lista_ad[i].size();j++){
			cout<<lista_ad[i][j]<<" ";
		}
		cout<<endl;
	}
}

void DFS(int nodo){  // Implementacion DFS
	visitado[nodo]=true;
	for(int i=0;i<lista_ad[nodo].size();i++){
		int vecino = lista_ad[nodo][i]
		if not(visitado[vecino]){
			DFS(vecino);
		}
	}
}


int main(){
	crear_lista(5)
	agregar_vecino(1,3)
	agregar_vecino(1,2)
	agregar_vecino(3,4)
	agregar_vecino(3,5)
	agregar_vecino(4,5)
	if(visitados[4]){
		cout<<"Se puede llegar desde 0 hasta 4"<<endl;
	}
	else{
		cout<<"No se puede llegar desde 0 hasta 4"
	}
	resturn 0;
}

```

***
## Busqueda en anchura (BFS)

La búsqueda en anchura **(Breadth First Search)** , es otro algoritmo que nos servirá para recorrer un grafo.

A diferencia de la búsqueda en profundidad , este visitara todos los vecinos del nodo actual antes de continuar y lo construiremos de manera iterativa

![[Pasted image 20230706211937.png]]

Con BFS si podemos encontrar el camino mas corto entre 2 nodos , 
ambos tienen una complejidad de *O(V+E)* en una lista de adyacencia siendo *V* la cantidad de nodos y *E* la cantidad de aristas y *O(n^2)* en caso de usar la matriz de adyacencia.

***

## Implementación 

¿Qué necesitamos para implementar el algoritmo?
- Un grafo , con su presentación de lista de adyacencia
- Un vector de bool's para marcar los nodos visitados
- Un vector que contenga las distancias desde el nodo inicial hasta el nodo actual
- Un vector que contenga el nodo anterior al actual

```cpp
#include <bits/stdc++.h>
using namespace std;

vector < vector<int> > lista_ad;
vector < bool > visitados;
vector < int > anterior; //nombre del nodo anterir al nodo i
vector < int > distancias; // distancia del nodo de origen hasta el nodo i

void crear_lista(int n){
  for(int i = 0; i < n; i++){
    visitados.push_back(false);//inicializar la lista de visitados
    anterior.push_back(-1);//inicializar la lista de antecesores
    distancias.push_back(-1);//inicializar la lista de distancias
    vector <int> nodo = {};
    lista_ad.push_back(nodo);
  }
}

void agregar_vecino(int nodo1, int nodo2){
  lista_ad[nodo1].push_back(nodo2);
  lista_ad[nodo2].push_back(nodo1);
}


void print_lista_ad(){
  for(int i = 0; i < lista_ad.size(); i++){
    cout << "Nodo " << i << ": ";
    for(int j = 0; j < lista_ad[i].size(); j++){
      cout << lista_ad[i][j] << " ";
    }
    cout << endl;
  }
}

vector <int> obtener_camino_minimo(int inicio, int destino){
  vector <int> camino = {};
  camino.push_back(destino);
  int actual = destino;
  while(anterior[actual] != -1){
    camino.push_back(anterior[actual]);
    actual = anterior[actual];
  }
  return camino;
}

bool bfs(int inicio, int destino){
  queue <int> cola;

  visitados[inicio] = true;
  cola.push(inicio);
  distancias[inicio] = 0;

  while(!cola.empty()){
    int actual = cola.front();
    cola.pop();
    for(int i = 0; i < lista_ad[actual].size(); i++){
      if(visitados[lista_ad[actual][i]] == false){
        visitados[lista_ad[actual][i]] = true;
        cola.push(lista_ad[actual][i]);
        distancias[lista_ad[actual][i]] = distancias[actual] + 1;
        anterior[lista_ad[actual][i]] = actual;
        if(lista_ad[actual][i] == destino)
          return true;
      }
    }
  }
  return false;
}

int main() {
  crear_lista(5);
  agregar_vecino(0, 1);
  agregar_vecino(1, 2);
  agregar_vecino(1, 3);
  agregar_vecino(3, 4);
  cout << "---------" << endl;
  if(bfs(0, 4)){
    cout << "El camino más corto entre los nodos es: " << endl;
    vector <int> path = obtener_camino_minimo(0,4);
    for(int i = path.size() - 1; i >= 0; i--){
      cout << path[i] << " ";
    }
    cout << endl;
  }
  else{
    cout << "Los nodos no están conectados" << endl;
  }
  return 0;
}
```

***
## Componentes Conexas

Una componente conexa es un grupo de nodos que están conectados por un camino

En el siguiente ejemplo, notamos que existen 2 componentes conexas

![[Pasted image 20230706215754.png]]

Como utilizamos **DFS** para saber cuantas componentes conexas existen en un grafo, (DFS visita todos los nodos alcanzables desde un nodo inicial).

Por lo tanto si al aplicar un DFS y no todos los nodos están visitados ya sabremos que hay mas de una componente conexa , La cantidad de componentes conexas estará determinada por las veces que tuvimos que aplicar DFS.

![[Pasted image 20230706220011.png]]

***
## Implementación

```cpp
//se asume que antes de esto se encuentra el codigo anterior
int main(){
	crear_lista(5)
	agregar_vecino(0,1);
	agregar_vecino(1,2);
	agregar_vecino(3,4);
	int componentes_conexas=0;
	for(int i=0;i<5;i++){
		if(visitados[i]==false){
			componentesconexas++;
			DFS(i);
		}
	}
	cout<<componentesconexas<<endl;
	return 0;
}
```
***

# 5.3 Algoritmo de Dijkstra

Hasta ahora , vimos **BFS** el cual nos ayudaba a determinar el camino mas corto en un grafo sin pesos.

Pero , ¿Qué pasa con grafos que si contienen peso?, ¿O grafos dirigidos con peso?

El [**algoritmo de Dijkstra**](https://es.wikipedia.org/wiki/Algoritmo_de_Dijkstra ) sirve para responder esa pregunta.
***
## ¿Como se aplica?
Digamos que queremos llegar desde el nodo 1 al nodo 4

![[Pasted image 20230706221516.png]]

Crearemos un arreglo el cual nos indicara la distancia del nodo 1 hasta cualquier nodo

![[Pasted image 20230710233144.png]]

Este arreglo parte en infinito ya que de momento no sabemos cuanto es la distancia mínima hacia ese nodo , pronto veremos porque la distancia es infinito y no otro numero.

Tambien necesitamos una cola de prioridad.
***
### Aplicando

Partiremos llenando el arreglo con las distancias mínimas.
Es decir tenemos un arreglo el cual contiene solo infinitos en principio y necesitamos rellenarlo con la distancia mínima desde el nodo 1 hasta el nodo i  por lo tanto el valor contenido en el arreglo solo se actualizara si se cumple que
								```arreglo[i]>distancia```  
Entonces la distancia mínima del nodo 1 hasta el nodo 1 sera 0 ya que son el mismo nodo y 0 es menor a infinito por lo tanto actualizamos el valor a 0. Luego la distancia mínima para llegar al nodo 2 es 4 , miramos en el arreglo y notamos que 4 < infinito , por lo tanto reemplazamos el valor y así sucesivamente. Cada cambio que se realice se agregara a la cola de prioridad de la siguiente manera: 

![[Pasted image 20230710234056.png]]
*Esto muestra que en el nodo 2 se actualizo la distancia mínima a 4 y que en el nodo 3 se actualizo la distancia mínima a 2*

Se continua iterando hasta llegar a la distancia mínima entre el nodo de partida y el nodo final
***
## El algoritmo

La complejidad de este algoritmo es de : $$ O((|E|+|V|)log(|V|))$$
Se puede aplicar este algoritmo , para grafos sin peso y grafos dirigidos 

Si el grafo tiene pesos negativos , no se puede aplicar Dijkstra , existe otro algoritmo llamado [Floyd-Warshall](https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm) el cual sirve en estos casos
***
## Implementacion

Para esta implementacion necesitamos:

-  El grafo
- Vector para almacenar distancias
- Una estructura que nos permita manejar el siguiente nodo que tenga la menor distanca posible , cola de prioridad

```cpp
#include <bits/stdc++.h>
using namespace std;

vector < vector<pair<int,int>> > lista_ad; // se inicializa la lista de adyacencia
vector <int> distancias; //se inicializa el vector de distancias

void crear_lista(int n){
	for(int i=0;i<n;i++){
		distancias.push_back(2147483647); //agregamos el infinito
		vector < vector<pair<int,int>> > nodo= {}; //un vector de vectores pair
		lista_ad.push_back(nodo);
	}
}

void agregar_vecino(int nodo1,int nodo2){
	lista_ad[nodo1].push_back(pair<int,int>(nodo2,peso));
	lista_ad[nodo2].push_back(pair<int,int>(nodo1,peso));
}

int dijkstra(int nodoOrigen,int nodoFinal){
	distancias[nodoOrigen]=0; //La distancia de un nodo a si mismo es 0
	priority_queue<pair<int,int>,
		vector<pair<int,int>>,
		greater<pair<int,int>>>siguiente; //se define la cola de prioridad
	siguiente.push(pair<int,int>(0,nodoOrigen)); // se pasa el  primer cambio
	while(!siguiente.empty()){ //se hace una iteracion entre todos los vecinos
		int nodo=siguiente.top().second; 
		int distancia=siguiente.top().first;
		siguiente.pop();
		if(nodo!= nodoFinal && distnacia <= distancias[nodo]){ 
			for(int i=0;i<lista_ad[nodo].size();i++){
				int vecino=lista_ad[nodo][i].first;
				int peso=lista_ad[nodo][i].second;
				if(distancias[vecino]>distancias[nodo]+peso){
					distancias[vecino]=distancias[nodo]+peso;
					siguiente.push(pair<int,int>(distancias[vecino],vecino));
				} // verifica que las distancias sean las minimas
			}
		}
	}
	return distancias[nodoFinal]; //retorna el camino mas corto hacia el nodo
}


void print_lista_ad(){
	for(int i=0;i<lista_ad.size();i++){
		cout<<"Nodo "<<i<<": ";
		for(int j=0;j<lista_ad[i].size();j++){
			cout<<lista_ad[i][j]<<" ";
		}
		cout<<endl;
	}
}

```
***
## Camino
Anteriormente vimos que el algoritmo de dijkstra nos ayuda a encontrar el camino mas corto , pero que sucede si quiero saber cual es el camino que compone el trayecto mas corto.

Para esto realizaremos algunas modificaciones en el codigo
```cpp
#include <bits/stdc++.h>
using namespace std;

vector < vector<pair<int,int>> > lista_ad; 
vector <int> distancias; 
vector <int> padre; //se agrega un vector para saber de donde llega hacia un nodo

void crear_lista(int n){
	for(int i=0;i<n;i++){
		padre.push_back(-1);//inicialmente todo se rellena con -1
		distancias.push_back(2147483647); 
		vector < vector<pair<int,int>> > nodo= {}; 
		lista_ad.push_back(nodo);
	}
}

void agregar_vecino(int nodo1,int nodo2){
	lista_ad[nodo1].push_back(pair<int,int>(nodo2,peso));
	lista_ad[nodo2].push_back(pair<int,int>(nodo1,peso));
}

int dijkstra(int nodoOrigen,int nodoFinal){
	distancias[nodoOrigen]=0; 
	priority_queue<pair<int,int>,
		vector<pair<int,int>>,
		greater<pair<int,int>>>siguiente; 
	siguiente.push(pair<int,int>(0,nodoOrigen)); 
	while(!siguiente.empty()){ 
		int nodo=siguiente.top().second; 
		int distancia=siguiente.top().first;
		siguiente.pop();
		if(nodo!= nodoFinal && distnacia <= distancias[nodo]){ 
			for(int i=0;i<lista_ad[nodo].size();i++){
				int vecino=lista_ad[nodo][i].first;
				int peso=lista_ad[nodo][i].second;
				if(distancias[vecino]>distancias[nodo]+peso){
					distancias[vecino]=distancias[nodo]+peso;
					siguiente.push(pair<int,int>(distancias[vecino],vecino));
					padre[vecino]=nodo; // ***
				} 
			}
		}
	}
	return distancias[nodoFinal]; 
}


void print_lista_ad(){
	for(int i=0;i<lista_ad.size();i++){
		cout<<"Nodo "<<i<<": ";
		for(int j=0;j<lista_ad[i].size();j++){
			cout<<lista_ad[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main(){
	crear_lista(5);
	agregar_vecino(0,1,4);agregar_vecino(0,2,2);
	agregar_vecino(1,3,8);agregar_vecino(2,3,10);
	agregar_vecino(2,4,2); agregar_vecino(3,4,3);
	//Codigo para mostrar el camino mas corto por pantalla (en orden)
	int costeCaminoMasCorto = dijkstra(0,3);
	if(costeCaminoMasCorto!=2147483647){
		cout<<costeCaminoMasCorto<<endl;
		vector<int> CaminoFinal;
		for(int i=3;padre[i]!=-1;i=padre[i]){
			caminoFinal.push_back(i);
		}
		caminoFinal.push_back(0);
		int tamanoCamino= caminoFinal.size();
		for(int i=tamanoCamino-1;i>=0;i--){
			cout<caminoFinal[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

```

***
## Grafos Dirigidos

Hasta el momento vimos como se podia encontrar cuanto vale el camino mas corto hacia un nodo y mostrar su camino , pero esto solo sirve en grafos no dirigidos.

En realidad , el algoritmo no cambia mucho pero si el concepto

Solo debemos modificar nuestra funcion para agregar vecino ya que en vez de agregar el mismo peso a ambos lados simplemente agregamos hacia uno.

```cpp
void agregar_vecino(int nodo1,int nodo2, int peso){
	lista_ad[nodo1].push_back(pair<int,int>(nodo2,peso));
}
```

Aqui se representa que el nodo 1 puede llegar al nodo 2 con un peso definido , si se quiere  hacer la conexion inversa se debe llamar nuevamente a la fuincion pero cambiando los parametros y especificando el nuevo peso.

---

# 5.4 Programación Dinámica

Durante este taller nos hemos detenido en algoritmos de distintos tipos de paradigmas.

**Fuerza Bruta**: buscar todos los posibles candidatos de un problema y obtener la solución que satisfaga la condición

**Dividir y conquistar**: divide el problema en pequeños problemas , luego los junta y responde la pregunta

Nos concentraremos en **Fuerza bruta.**
Este paradigma si bien logra encontrar optimos , tiende a tener complejidades muy altas e inutiles para la resolucion de un problema.

Por ejemplo:

- Calcular Fibonacci utilizando este paradigma tiene una complejidad de $$O(2^n)$$
- Obtener la mayor suma de elementos contiguos dentro de un arreglo con números tanto positivos como negativos
***
## Problema

Para entender mejor la programación dinámica usaremos el ultimo ejemplo :

Una característica de este problema es que tiene muchos cálculos que se repiten , por lo tanto podríamos aprovechar esto y  reducir el calculo a realizar , Como? hay que observar el problema a resolver y como se comportan los sub-problemas a resolver.

Primero el problema, queremos obtener la mayor suma de la suma entre números continuos , o sea desde una posición *i* hasta una posición *j*.

ejemplo :    ![[Pasted image 20230711021734.png]]

Segundo : encontrar el valor , Uno determina que es la suma acumulada de tal forma que sea la máxima encontrada hasta ahora , pero con un detalle

Si hacemos la suma de izquierda a derecha y en algún punto da 0 o menor, significa que tenemos que reinicar la suma, puesto que de ahi para atras ya revisamos lo suficiente.

Esto anterior funciona , porque queremos revisar  todo de izquierda a derecha reiniciando la suma en esos casos puesto que no vale la pena considerarlo , de esta manera pasamos de un algoritmo con complejidad
*O(2^n) => O(n)*
***
## Conclusión

Esta técnica permite optimizar problemas de fuerza bruta , de buscar todas las formas  , Pasando de complejidades exponenciales o factoriales a complejidades lineales o cuadráticas

Sin embargo cada problema tiene su truco , por lo tanto debemos ver como transformar el problema a un paradigma de programación dinámica , par ello debemos analizar el problema , su solución y sus sub-problemas y sacarles el mayor provecho

*Este concepto es mas bien abstracto y se aprende ejercitando por lo tanto aquí hay 2 vídeos donde se practica lo anterior: [video 1](https://www.youtube.com/watch?v=YLJQpfCUNxU&list=PLy2jm3Sk6xV4iyIeT-fWxWE6aAyCAFGf7&index=2), [video 2](https://www.youtube.com/watch?v=Kw4XDt34WVo&list=PLy2jm3Sk6xV4iyIeT-fWxWE6aAyCAFGf7&index=3) 


