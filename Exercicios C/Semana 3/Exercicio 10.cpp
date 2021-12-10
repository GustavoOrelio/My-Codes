#include <stdio.h>

int main()
{
    float precos[5];
    int i;
    
    for(i=0; i<5; i++){
        printf("\n\nInforme o preco %d: ",(i+1));
        scanf("%f",&precos[i]);
        precos[i] = precos[i] + (precos[i]*0.1);
        printf("\nO preco %d atualizado eh: %.2f",(i+1),precos[i]);
    }
    
return(0);
}
