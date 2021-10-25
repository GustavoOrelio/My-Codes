nome = str(input('Digite umm nome:'))
vogais = "aeiou"
funcao = []

def verificar(nome):

    for i in nome:
        if(i in vogais):
            funcao.append(i)
    print('As vogais do nome são:', funcao)

verificar(nome)