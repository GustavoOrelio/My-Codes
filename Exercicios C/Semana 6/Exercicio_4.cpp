#include <stdio.h>

float media_notas(float soma){
    
    float media;
    media = soma/4;
    return media;
    
}

int main()
{
    struct alunos {
        char nome[50];
        char matricula[8];
        char turma[1];
        float nota[4];
        float soma_notas;
        float media;
    };
    
    struct alunos aluno[2];
    
    
    for(int i=0; i<20; i++){
        printf("Informe o nome do aluno %i: ",i+1);
        scanf("%s",aluno[i].nome);
    }
    
    for(int i=0; i<20; i++){
        printf("Informe o numero de matricula do aluno %i: ",i+1);
        scanf("%s",aluno[i].matricula);
    }
    
    for(int i=0; i<20; i++){
        printf("Informe a turma do aluno %i: ",i+1);
        scanf("%s",aluno[i].turma);
    }
    
    for(int i=0; i<20; i++){
        for(int j=0; j<4; j++){
            printf("Informe a %iº nota do aluno %s: ",j+1,aluno[i].nome);
            scanf("%f",&aluno[i].nota[i]);
            aluno[i].soma_notas += aluno[i].nota[i];
        }
    }
    
    for(int i=0; i<20; i++){
       aluno[i].media = media_notas(aluno[i].soma_notas);
        if(aluno[i].media >= 6){
            printf("\nAluno %s, matricula %s, turma %s, APROVADO",aluno[i].nome, aluno[i].matricula, aluno[i].turma);
            
        }else{
            printf("\nAluno %s, matricula %s, turma %s, REPROVADO",aluno[i].nome, aluno[i].matricula, aluno[i].turma);
        }
    }
    

    return 0;
}
