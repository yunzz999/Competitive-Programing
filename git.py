import os
import subprocess

def git_push(commit):
    subprocess.run(['git','add','.'])
    subprocess.run(['git','commit','-m',commit])
    subprocess.run(['git','push'])

def git_pull():
    subprocess.run(['git','pull'])

def main():
    if __name__=='__main__':
        print("Automatic GIT PULL/PUSH")
        print("1. git pull")
        print("2. git push")
        print('3. exit')       
        opcion = int(input("Ingrese su opcion: "))
        if opcion == 1:
            git_pull()
        if opcion == 2:
            git_push(input('Ingrese el commit: '))
        if opcion==3:
            exit()

main()