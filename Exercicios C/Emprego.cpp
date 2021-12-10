#include <stdio.h>

int main(){
	
	float x, y, z;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	
	printf("Digite o valor de y: ");
	scanf("%f", &y);
	
	printf("Digite o valor de z: ");
	scanf("%f", &z);
	
	if(y > x){
		x = y;
		z = x*2;
		y = z+x;
	} else {
		z = x+y;
		y= y-z;
		x = y/2;
	}

	if (y >= 2){
		z = (x+2);
	} 
	
	x = y/z-0.5;
	z = x+1;
	y = y-z;
	
	
	printf("\nNovo valor de x: %.1f", x);
	printf("\nNovo valor de y: %.1f", y);
	printf("\nNovo valor de z: %.1f", z);
	
	return(0);
}
