#include <stdio.h>
#include <stdlib.h>

void ordenar(); 

int variaveis[2];
    int main(){          
        int i;
        for (i=0; i<2; i++){
            printf("Digite os valores das variaveis para ordenar: ");
            scanf("%d", &variaveis[i]);
        }
    
    ordenar();
    for (i=0; i<2; i++){
        printf("vetores ordenados: %d \n", variaveis[i]);
        }
        system("pause");
    }

void ordenar(){
    int i, j, aux;
        for( i=0; i<2; i++ ){
            for( j=i; j<2; j++ ){
                if( variaveis[i] > variaveis[j] ){
                    aux = variaveis[i];
                    variaveis[i] = variaveis[j];
                    variaveis[j] = aux;
                    }
                }
            }
    }
