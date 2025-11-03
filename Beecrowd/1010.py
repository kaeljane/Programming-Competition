cod1, num1, valorunit1 = input().split(' ')
cod2, num2, valorunit2 = input().split(' ')

num1, num2 = int(num1), int(num2)
valorunit1, valorunit2 = float(valorunit1), float(valorunit2)

calculo = (num1*valorunit1) + (num2*valorunit2)

print(f'VALOR A PAGAR: R$ {calculo:.2f}')

