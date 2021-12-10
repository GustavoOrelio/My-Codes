#include <stdio.h>

int main()
{
    char nomes[10][20];
    int notas[10][4];
    float medias[10];
    int i, j, soma;
    
    for(i=0; i<10; i++){
        printf("\nInforme o nome do aluno %i: ",(i+1));
        scanf("%s",nomes[i]);
        for(j=0; j<4; j++){
            printf("Informe a nota %i do aluno %s: ",(j+1),nomes[i]);
            scanf("%d",&notas[i][j]);
        }
    }
    
    for(i=0; i<10; i++){
        for(j=0; j<4; j++){
            soma += notas[i][j];
        }
        soma = soma/4;
        medias[i] = soma;
        soma = 0;
    }
    
    for(i=0; i<10; i++){
        if(medias[i] >= 6){
            printf("\nO aluno %s foi APROVADO",nomes[i]);
        } else{
            printf("\nO aluno %s foi REPROVADO",nomes[i]);
        }
    }

    return 0;
}

