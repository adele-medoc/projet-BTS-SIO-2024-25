n = int(input("saisir n : "))

for i in range(1, n+1):
    print("X"*i) 

for i in range(n):
    print("." *i, end='')
    print("O" *(n - i))


    