

## Parámetros por referencia

los parámetros se pueden pasar por referencia añadiendo `&` antes de su nombre `tipo &nombre`, esto permite modificar el valor original que se usó en la llamada a la función.

```cpp
#include <iostream>
using namespace std;
void funcion(int &a) { 
	a = 5; }
	
int main() { 
	int b = 2; 
	funcion(b); 
	cout << b << '\n'; // imprime 5 
}
```

*No confundir **&** en la declaración de una variable o parámetro con el operador de dirección **&** 


## Recursividad

Una función puede llamarse a sí misma, al hacerlo se dice recursiva, de una forma similar a una definición matemática por recurrencia, por ejemplo con la sucesión de Fibonacci:


```cpp
int fibonacci(int n) { 
	if (n <= 0) { // Caso base 
		return 0; 
	} 
	else if (n == 1) { // Case base
		return 1; 
	} 
	else { // Caso recurrente 
		return fibonacci(n-1) + fibonacci(n-2); }
	 }
}
```

*Esta definición de la sucesión de Fibonacci no es la más óptima*

## Lambda

Desde C++11 se pueden definir lambdas, o funciones sin nombre, y como implementar rápido los algoritmos es importante en programación competitiva, usarlas en funciones como `min`, `max` y `sort` resulta útil.

Su sintaxis es `[capturas] (parámetros) {cuerpo}`, dentro de los corchetes van las capturas, por simplicidad solo utilizaremos `[&]`, esto porque la captura `&` hace que la lambda se comporte igual a las lambdas de la mayoría de lenguajes (como Python y JavaScript). La lista de parámetros y cuerpo son idénticos a los de una función normal, un ejemplo:

```cpp
#include <iostream> 
using namespace std;

int main() {
	auto lambdaSuma = [&] (int a, int b) { return a + b; }; 
	cout << lambdaSuma(5, 6) << '\n'; 
	return 0; 
}
```

*Las lambdas no necesitan llevar su tipo de retorno, ya que el compilador lo deduce de los `return`

## Función `main` y el Flujo del Programa

Como ya habrán visto, la función `main` es el punto de partida de los programas en C++. Esta función retorna un `int`, cuyo valor es el código de termino del programa y cualquier valor distinto de `0` se considera un código de error.

Algunos jueces esperan que el programa termine con código `0` (_sin error_), por ello es importante agregar `return 0;` al final de `main`, lo mismo aplica si se termina tempranamente la ejecución del programa, como con la función `exit`:

```cpp
#include <iostream> 
using namespace std;

int main() { 
	int n; cin >> n; 
	if (n == 0){
		cout << "Caso borde, no es necesario seguir ejecutando";
		exit(0); // terminamos temprano con código 0
	} 
/* Resto del algoritmo */
	return 0;
}
```

***
## Vectores

Hasta ahora solo podemos guardar una cantidad constante de variables y todas de forma manual, sin embargo, con frecuencia necesitaremos una cantidad de variables que depende del input o quizás simplemente tantas variables que nos sea inconveniente crearlas a mano. Vamos a ver como usar vectores.

Los vectores son una estructura que nos permite guardar una cantidad cualquiera de variables (tomando en cuenta el límite de memoria de la máquina). Se puede acceder, guardar y modificar las variables sin problema, también tenemos la posibilidad de agregar una variable al final del vector (cambiando el tamaño), lo único complicado es borrar una variable en medio del vector porque para esto se tienen que mover todas las variables que están en frente de este

```cpp
vector<int> Nums (10,42) // Definicion de vector de tamaño 10 y cada uno de sus componentes inicializados en 42

Nums[i] // Esto sirve para asignar un valor o acceder al elemento en la posicion i

Nums.push_back(valor) // Esto sirve para agregar el valor 'valor' al final del vector

Nums.size() // Esto retorna el tamaño del vector

Nums.resize(n) // De esta manera los elementos mayores a este tamaño se eliminan

Nums.assign(tamaño,numero) // De esta manera se vuelve a inicializar el vector

Nums.clear() //Limpia el vector

Nums.empty() // Devuelve true si el vector esta vacio
```

## Matrices

```cpp
int n,m; 
cin>>n>>m; 
// Aquí creamos una matriz de tamaño n x m 
vector< vector<int> > mat( n , vector<int>(m) );
// Aquí leemos todos los valores de la matriz
// Las filas representadas por i y las columnas por j 
for (int i=0;i<n;i++){ 
	for (int j=0;j<m;j++){ 
		cin>>mat[i][j]; 
		} 
	} 

// Podemos aplicar todas las funciones de vectores a estas matrices // Su tamaño nos dirá cuantas filas tiene 

cout<<mat.size()<<'\n'; 

// Si accedemos a alguna fila, nos entrega un vector que representa la fila 
// Nuevamente podemos ver el tamaño, que ahora será m 

cout<<mat[0].size()<<'\n';

// Para acceder al elemento tenemos que decir su fila y columna 
// Aquí imprimimos el primer elemento 
cout<<mat[0][0]<<'\n';

```


## Operadores de Bits

....


## Chars

Los caracteres en C++ en realidad son guardados como números dentro del computador, estos números son interpretados como un carácter al ocupar el programa pero son números por debajo lo cual nos permite hacer algunos usos interesantes de estos.

La correspondencia entre el número y el carácter que representa está dada por el [código ASCII](https://en.cppreference.com/w/cpp/language/ascii), no es necesario que sepan de memoria la correspondencia entre números y símbolos, solo saber como funciona es suficiente. De hecho, si uno quisiera saber el valor de cualquier carácter se podría hacer con este pequeño código:

```cpp
char c = 'c'; 
cout << (int) c << '\n';
```

(Dato) ```
```
(tipo de dato) dato 
```

```c++
using namespacestd;

// Propiedades de CHAR

isalpha(c)
isdigit(c)
isupper(c)
islower(c)
tolower(c)
toupper(c)
```

## Strings

Los strings funcionan muy parecido a los vectores de caracteres, lo cual nos da todas las facilidades que tienen los vectores:

- Acceder a los distintos caracteres del string usando índices con `s[i]`
- Obtener el tamaño del string con `s.size()`
- Funciones como `s.clear()`, `s.resize(n)`, `s.assign(n,'a')`, etc…

Pero al ser un tipo de estructura distinta tiene otras propiedades como:

- Al leer un string con cin se lee un grupo de carácteres hasta encontrar un espacio o un salto de línea.
- Se pueden concatenar dos strings con el símbolo `+`
- Una función útil de los strings es `s.substr(i,n)` que nos entrega el substring de `s` que parte en `i` y tiene tamaño `n` en un nuevo string.

Para dar un ejemplo vamos a hacer un pequeño programa que imprima todos los substrings de un string:

```cpp
string s;
cin >> s;
for (int i = 0; i < s.size(); i++){ //punto de partida 
	for (int j = i; j < s.size(); j++) { //punto de termino
		 cout << s.substr(i, j-i+1) << '\n'; 
	} 
}
```

