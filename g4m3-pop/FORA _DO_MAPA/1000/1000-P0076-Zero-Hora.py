# 10min 1sec

a = float(input())

ans = (12*a)/360 * 60

horas = int(ans // 60)
min = int(ans % 60)

print(f"{horas}h{min}m")

