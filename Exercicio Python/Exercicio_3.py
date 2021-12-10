nome = [''] * 4


for i in range(0,len(nome)):
    nome[i] = str(input("Digite os nomes:"))
    
nome_ordenado =sorted(nome, key=len)

print('Nomes digitados:', nome)

print('Nomes ordenados:', nome_ordenado)