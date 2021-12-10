#include<stdio.h>

int soma (int a, int b);
int main(){
	
    int valor1,valor2,resultado;
    
    printf("Digite um valor: ");
    scanf("%d",&valor1);
    
    printf("\nDigite um valor: ");
    scanf("%d",&valor2);
    
    resultado = soma(valor1,valor2);
    
    printf("\nA soma dos valores resultou em: %d",resultado);
    
    return 0;
}

soma(int a, int b){
    int r;
    r = a + b;
    return(r);
}
