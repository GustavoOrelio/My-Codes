#include <stdio.h>
#include <math.h>

int main(){
	
	float ca, co, h;
	
	printf("Informe o valor do cateto adjacente:");
	scanf("%f", &ca);
	
	printf("Informe o valor do cateto oposto:");
	scanf("%f", &co);
	
	h = sqrt((pow(ca,2) + pow(co,2)));
	
	printf("A hipotenusa eh: %.1f", h);
	
return(0);}
