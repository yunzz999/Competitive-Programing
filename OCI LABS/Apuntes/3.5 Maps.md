## Para que sirven ?
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


  
  
# Funciones 

## 1.**Insert**: recibe un pair con la llave y valor a guardar 

```cpp
#include <map>
using namespace std;

main(){
    map <char,int> miMapita;
    miMapita.insert(pair<char,int>("Hola",9))
}
```
## 2. **Erase:** borra un elemento del map por su llave
```cpp
#include <map>
using namespace std;

main(){
    map <char,int> miMapita;
    miMapita.insert(pair<char,int>("Hola",9))
    miMapita.erase("Hola")
```

## 3. **Find:** busca un elemento por su llave y retorna un iterador del map
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

## 4.**Size:** retorna cuantos elementos hay en el map
```cpp
mapita.size()
```
## 5. **Empty: **indica si el map esta vacio
```cpp
mapita.empty()
```
## 6. **Clear:** borra todos los elementos dentro del map
```cpp
mapita.clear()
```