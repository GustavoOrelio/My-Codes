#include<stdio.h>

int main(){
	
	int numero, menor , i;

 	printf("Entre com o 1o numero inteiro: ");
 	scanf("%i", &numero);

	menor=numero;
	
	for(i=1; i<5; i++){
	printf("Entre com o %do numero inteiro: ",i+1);
	scanf("%i", &numero);
	
	if(numero<menor)
	menor=numero;}

 	printf("O menor numero entrado eh: %d", menor);
 
return(0);} 
