def fac(n):
    s=1
    for i in range(2,n+1):
        s*=i
    return s

def main():
    a=int(input())
    b=int(input())
    print(fac(min(a,b)))

main()
