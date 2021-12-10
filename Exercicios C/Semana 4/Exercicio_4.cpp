#include<stdio.h>
int main(){
	
    int valor1,valor2,temp;
    
    printf("Digite o primeiro valor:");
    scanf("%d",&valor1);
    
    printf("Digire o segundo valor:");
    scanf("%d",&valor2);
    
    temp = valor1;
    
    valor1 = valor2;
    
    valor2 = temp;
    
    printf("\n\nO primeiro valor eh: %d \nO segundo valor eh: %d",valor1,valor2);
    
return 0;
}
