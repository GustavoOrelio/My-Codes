#include <stdio.h>

int main(){
	
	int a, b;
    int Numeros[30];
    
	for (a = 0;a<30;a++){
    	printf("Digite um numero: ");
    	scanf("%d", &Numeros[a]);
    	fflush(stdin);
	}
    
	for (b = 29; b >= 0; b--){
        printf("%d\n", Numeros[b]);
    }
    return 0;
}
