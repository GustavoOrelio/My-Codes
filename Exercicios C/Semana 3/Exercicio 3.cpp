#include <stdio.h>

int main(){
	
	int n1 = -1, n2 = -1;
	float media;
	
	
	while(n1 < 0 || n1 > 10){
		
		printf("\nDigite a primeira nota:");
		scanf("%d", &n1);
		if(n1 < 0 || n1 > 10){	
			printf("\nNota invalida");
		}
	}	
	
	
	while(n2 < 0 || n2 > 10){
		
		printf("\nDigite a segunda nota:");
		scanf("%d", &n2);
		if(n2 < 0 || n2 > 10){	
			printf("\nNota invalida");
		}
		
	}
		media = (n1 + n2)/2;
		printf("\nMedia das notas eh: %2.f", media);
	
	return(0);
	
}

