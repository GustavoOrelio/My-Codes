#include <stdio.h>

int main()
{
    int lados, tamanho;
    float area;
    
    printf("Digite o numero de lados do poligono: ");
    scanf("%d", &lados);

    switch(lados)
    {
        case 3: printf("\nDigite o tamanho do lado deste poligono: ");
                scanf("%d", &tamanho);
                area = tamanho*tamanho*1.73 / 4;
                printf("\nArea: %.2f", area);
                break;
        case 4: printf("\nDigite o tamanho do lado deste poligono: ");
                scanf("%d", &tamanho);
                area = tamanho*tamanho;
                printf("\nArea: %.2f", area);
                break;
        case 6: printf("\nDigite o tamanho do lado deste poligono: ");
                scanf("%d", &tamanho);
                area = 6*tamanho*tamanho*1.73 / 4;
                printf("\nArea: %.2f", area);
                break;
        default : printf("\nNao sei calcular a area.");
        
    }
    
    return(0);
}
