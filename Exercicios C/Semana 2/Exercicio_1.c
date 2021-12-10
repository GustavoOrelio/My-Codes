#include <stdio.h>
int main() {
	int raio;
	float diametro, area,  circ;
	float PI = 3.14159265359;
	
	printf("\nInforme o valor do Raio = ");
	scanf("%d", &raio);
	
	diametro = 2*raio;
	
	area = PI * raio * raio;
	
	circ = 2 * PI * raio;
	
	printf("Valor do diametro:\2%f", diametro);
	printf("Valor da Area:\2%f", area);
	printf("Valor da Circuferencia\2%f", circ);
	
return(0); }
