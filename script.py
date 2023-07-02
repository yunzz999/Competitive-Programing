import os 

def contest(numero):

    os.mkdir("Clase "+str(numero))
    os.mkdir("Clase "+str(numero)+"/A")
    file = open("Clase "+str(numero)+"/A"+"A"+str(numero)+".cpp", "w")
    file.write("#include <bits/stdc++.h>" + os.linesep)
    file.write("using namespace std;" + os.linesep)
    file.close()

    os.mkdir("Clase "+str(numero)+"/B")
    file = open("Clase "+str(numero)+"/B"+"B"+str(numero)+".cpp", "w")
    file.write("#include <bits/stdc++.h>" + os.linesep)
    file.write("using namespace std;" + os.linesep)
    file.close()

    os.mkdir("Clase "+str(numero)+"/C")
    file = open("Clase "+str(numero)+"/C"+"C"+str(numero)+".cpp", "w")
    file.write("#include <bits/stdc++.h>" + os.linesep)
    file.write("using namespace std;" + os.linesep)
    file.close()

    os.mkdir("Clase "+str(numero)+"/D")
    file = open("Clase "+str(numero)+"/D"+"D"+str(numero)+".cpp", "w")
    file.write("#include <bits/stdc++.h>" + os.linesep)
    file.write("using namespace std;" + os.linesep)
    file.close()

def main():
    for i in range(1, 11):
        if os.path.isdir("Clase "+str(i)):
            if os.path.isdir("Clase "+str(i)+"/A"):
                print("Clase "+str(i)+" Lista! \n")
            else:
                contest(i)
                print("Clase "+str(i)+" Lista! \n")
        else:
            os.mkdir("Clase "+str(i))
            contest(i)
            print("Clase "+str(i)+" Lista! \n")

main()




