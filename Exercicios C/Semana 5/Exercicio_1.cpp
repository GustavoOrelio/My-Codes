#include <stdio.h>

int main(){
	int n[10];
	
	for(int i=0; i<10; i++){
		printf("\nInforme o numero %d: ", i+1);
		scanf("%d", &n[i]);
	}
	
	for(int i=0; i<10; i++){
		printf("\nO numero %d digitado foi: %d", i+1, n[i]);
	}
	return(0);
}
