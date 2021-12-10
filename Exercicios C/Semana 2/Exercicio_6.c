#include <stdio.h>

int main(){
	
	float dmaior, dmenor, area;
	
	printf("Informe a diagonal maior:");
	scanf("%f", &dmaior);
	
	printf("Informe a diagonal menor:");
	scanf("%f", &dmenor);
	
	area = (dmaior + dmenor)/2;
	
	printf("A area dolosango eh: %.1f", area);
	
return(0);}
