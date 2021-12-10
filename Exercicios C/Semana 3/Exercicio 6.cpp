#include <stdio.h>

int main (){
	
	int n, i = 10;
	
	float soma, media;
	
	soma = 0;
	
	for (i = 1; i <= 10; i++){
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &n);
	soma = soma + n;
	}
	
	media = soma / 10; 
	
	printf("Media = %2.f \n", media);
	
return(0);	
}
