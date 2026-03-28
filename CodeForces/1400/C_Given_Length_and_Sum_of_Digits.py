m, s = map(int, input().split())
sBack = s

# fazendo de forma noob
qtNovis = s//9
s %= 9
qtOitu = s//8
s %= 8
qtSet = s//7
s %= 7
qtSeis = s//6
s %= 6
qtCinco = s//5
s %= 5
qtQuatro = s//4
s %= 4
qtTres = s//3
s %= 3
qtDois = s//2
s %= 2
qtUns = s//1

listaDoida = [qtUns, qtDois, qtTres, qtQuatro, qtCinco, qtSeis, qtSet, qtOitu, qtNovis]
qtTotal = qtUns + qtDois + qtTres + qtQuatro + qtCinco + qtSeis + qtSet + qtOitu + qtNovis
lista = []

for i, x in enumerate(listaDoida):
    if x > 0:
        lista.extend([str(i+1)] * x)

ansMinimo = ""
ansMaximo = ""

if qtTotal > m:
    print("-1 -1")
elif sBack == 0:
    if m == 1:
        print("0 0")
    else:
        print("-1 -1")

elif qtTotal == m:
    # so preecher a string com os numeros
    for x in lista:
        ansMinimo += str(x)

    # agora o numero maximo so inverter a string
    ansMaximo = ansMinimo[::-1] 

    print(f"{ansMinimo} {ansMaximo}")
else: 
    # caso a quantidade total seja menor que m, precisamos jogar algum numero provavelmente 1 para a extremidade esquerad retirando ele de alguma quantidade 
     
    # calculo do minimo
    ansMinimo = "1"
    aux = "" # vai ser invertida depois

    lista.reverse()

    for i, x in enumerate(lista):
        if (i != len(lista) - 1):
            aux += str(x)
        else:
            aux += str(int(x)-1)
    
    # completar o restante com zeros
    qtZerus = m - len(lista) - 1
    aux += '0' * qtZerus
    
    ansMinimo += aux[::-1]
    
    # calculo do maximo
    ansMaximo = ""
    for x in lista:
        ansMaximo += str(x)

    qtZerus = m - len(ansMaximo)
    ansMaximo += '0'*qtZerus
    
    print(f"{ansMinimo} {ansMaximo}")
