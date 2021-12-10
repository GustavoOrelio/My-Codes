#include<stdio.h>
int main(){
		
	int a[5], b[5], i, soma = 0;
	
	for(i=0; i<5; i++){
	 
	 	printf("\nDigite o valor de a[%d] ", i);
	 	scanf("%d", &a[i]);
	 }
	for(i=0; i<5; i++){
		 	
	 	printf("\nDigite o valor de b[%d] ", i);
		scanf("%d", &b[i]);
	 }
	
	for(i=0; i<5; i++)
	soma = soma + a[i]+ b[4-i];
	
	
	printf("\nA soma eh: %d ", soma);
	
return(0);
}
