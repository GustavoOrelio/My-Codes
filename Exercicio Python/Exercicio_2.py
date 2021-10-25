num = [15, 84, 74, 94, 57, 12, 45, 48]
g = 3

numero = int(input('Digite um número:'))

for i in range(0,8):
    if(num[i] == numero):
        print('A posiçao do numero é {}'.format(num.index(num[i])))
        g = 8

if(g == 3):
    print('Número não encontrado na lista')