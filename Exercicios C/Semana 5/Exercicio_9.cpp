#include<stdio.h>

int main(){
	
	int matriz[3][4];
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<4;coluna++){
			printf("Informe um valor: ");
			scanf("%d",&matriz[linha][coluna]);
			matriz[linha][coluna] = matriz[linha][coluna] * 3;
		}
	}
	
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<4;coluna++){
			printf("O triplo do valor eh: %d\n",matriz[linha][coluna]);
		}
	}
	return 0;
}
