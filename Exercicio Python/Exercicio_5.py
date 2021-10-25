def num(numero):
    numero[i] = int(input("Digite um valor:"))

def par(numero):
    if(numero[i] % 2 == 0):
        print(numero[i])

numero = [0] * 5

for i in range(0,len(numero)):
    num(numero)
print('Os numeros pares são:')
for i in range(0,len(numero)):
    par(numero)
