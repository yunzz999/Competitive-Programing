import os 
import time

def optimizado (numero):
    include = "#include <bits/stdc++.h>"
    using = "using namespace std;"
    Letras= ["A","B","C","D"]

    os.mkdir("Clase "+str(numero))
    os.mkdir("Clase "+str(numero)+"/Contest")

    for i in range(len(Letras)):
        path="Clase "+str(numero)+"/Contest"+"/"+Letras[i]
        os.mkdir("Clase "+str(numero)+"/Contest"+"/"+Letras[i])
        file = open(path+"/"+Letras[i]+str(numero)+".cpp", "w")
        file.write(include+os.linesep)
        file.write(using + os.linesep)
        file.close
    time.sleep(1)
    print("Carpeta lista!")
    



def main():
    numero=input("Numero de la clase: ")
    optimizado(numero)  
main()




