#include<stdio.h>

int main(){
	
	float numero, maior , i;

 	printf("Entre com o 1o numero : ");
 	scanf("%f", &numero);

	maior=numero;
	
	for(i=1; i<3; i++){
	printf("Entre com o %.do numero : ",i+1);
	scanf("%f", &numero);
	
	if(numero>maior)
	maior=numero;}

 	printf("O maior numero entrado eh: %.2f", maior);
 
return(0);} 
