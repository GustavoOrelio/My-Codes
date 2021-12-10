#include<stdio.h>
int main(){
	
    float valor1,valor2,divisao;
    
    printf("Insira o valor 1: ");
    scanf("%f",&valor1);
    
    valor2 = 0;
    
    while(valor2 == 0){
        printf("Insira o valor 2: ");
        scanf("%f",&valor2);
    }
    divisao = valor1 / valor2;
    printf("A divisão do valor 1 pelo valor 2 eh: %2.f",divisao);
    return 0;
}
