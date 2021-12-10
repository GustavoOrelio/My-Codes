#include <stdio.h>
#include <locale.h>

enum pecas { espacovazio, peao, cavalo, torre, bispo, rei, rainha }; // cria um enum para usar como contador de peças;

int main(){

	float c;

	int tabuleiro[8][8] = {
 	{3, 2, 4, 5, 6, 4, 2, 3},
 	{1, 1, 1, 1, 1, 1, 1, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0},
 	{1, 1, 1, 1, 1, 1, 1, 1},
 	{3, 2, 4, 5, 6, 4, 2, 3}
 	};

 	printf("\nO tabuleiro esta montado da seguinte forma:\n\n");

 	int linha, coluna;

 	for (linha = 0; linha < 8; linha++){
		for (coluna = 0; coluna < 8; coluna++){ 
 			printf("%d ", tabuleiro[linha][coluna]);
 		}
 		printf("\n");
 	} 

 	int contador[7] = { 0 }; 
 	int i, x;

 	for (i = 0; i < 8; i++) {
 		for (x = 0; x < 8; x++) {
 			switch (tabuleiro[i][x]){

 				case espacovazio: contador[0]++;
				break;

				case peao: contador[1]++;
				break;
				
				case cavalo: contador[2]++;
				break;
				
				case torre: contador[3]++;
				break;
				
				case bispo: contador[4]++;
				break;
				
				case rei: contador[5]++;
				break;
				
				case rainha: contador[6]++;
				break;
			}
		}
	}

	 printf("\n");	
	 printf("LEGENDA\n"); 	
	 printf("0 - Espaco vazio | 1 - Peao | 2 - Cavalo | 3 - Torre | 4 - Bispo | 5 - Rei | 6 - Rainha\n\n");	
	 printf("\nQuantidade de casas vazias e pecas:\n\n");	
	 printf("Casas vazias\t= %d\n", contador[0]);	
	 printf("Peoes\t\t= %d\n", contador[1]);	
	 printf("Cavalos\t\t= %d\n", contador[2]);	
	 printf("Torres\t\t= %d\n", contador[3]);	
	 printf("Bispos\t\t= %d\n", contador[4]);	
	 printf("Reis\t\t= %d\n", contador[5]);
	 printf("Rainhas\t\t= %d\n", contador[6]);
	
 return 0;

}
