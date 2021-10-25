nome = [0.0] * 10
soma = 0
n = 0

for i in range(0,len(nome)):
    nome[i] = float(input("Qual é o número:"))
    if(nome[i] > 30.5):
        soma += nome[i] 
    if(nome[i] > 30.5): 
        n = n+1

print('Valores digitados:', nome)

print(n, 'são maiores que 30.5')

print('', soma)

