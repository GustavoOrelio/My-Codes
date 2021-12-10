#include <stdio.h>
#include <math.h>

int main(){
	
	int x,y,tam;
	float vet[10], quad[10];
	for (x=0; x<=9; x++){
	 printf("Digite o numero %d: ",x+1);
	 scanf("%f", &vet[x]);
	 quad[x] = pow(vet[x],2);
	}
	
	for (x=0; x<=9;x++){
	 printf("\nNumero ao quadrado eh: %4.0f",quad[x]);
	}
	
	 return 0;
}
