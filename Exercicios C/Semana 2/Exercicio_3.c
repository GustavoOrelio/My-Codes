#include <stdio.h>

int main() {
	
	float temp, conver;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &temp);
	
	conver = temp * 1.8 + 32;

	printf("A temperatura em Fahrenheit eh: %.1f", conver);
	
return(0);
	
}
