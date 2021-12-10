#include <stdio.h>

int main(){
	
	float n1, n2, media;
	
	printf("Digite um numero :");
	scanf("%f", &n1);
	
	printf("Digite outro numero :");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	
	printf("A media eh: %.1f", media);
	
return(0);}
