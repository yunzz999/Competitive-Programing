def F(x,n):
    k=int(n/x)
    return 0.5*x*(k*(k+1))

def Sol(n):
    max=0
    for i in range(2,n+1):
        if(F(i,n)>max):
            max=F(i,n)
            s=i
    return s

def main():
    t=int(input())
    for i in range(t):
        n=int(input())
        print(Sol(n))

main()

## solved