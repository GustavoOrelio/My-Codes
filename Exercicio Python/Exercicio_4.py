def numero_inteiro(numero):
    numero[i] = int(input("Digite um valor:"))

numero = [0] * 5

for i in range(0,len(numero)):
    numero_inteiro(numero)
    
print('O primeiro numero da lista é:', numero[0])