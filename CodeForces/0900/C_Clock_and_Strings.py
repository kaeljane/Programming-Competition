# apelando para python
t = int(input())


while (t):
    t-=1
    achouC = False
    achouD = False
    lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
    a, b, c, d = map(int, input().split())

    indI = int(a - 1)
    while (True):
        if (lista[indI] == c):
            achouC = True
        if (lista[indI] == d):
            achouD = True
            
        if (lista[indI] == b):
            break
            
        indI -= 1
        
    if (achouC == True and achouD == False):
        print("YES")
    elif (achouC == False and achouD == True):
        print("YES")
    else:
        print("NO")
        