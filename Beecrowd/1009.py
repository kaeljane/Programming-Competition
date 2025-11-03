name = str(input())
salary = float(input())
vendas = float(input())

comissao = 15/100 * vendas

print(f'TOTAL = R$ {(salary + comissao):.2f}')