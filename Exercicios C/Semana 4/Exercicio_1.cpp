#include <stdio.h>
#include <stdlib.h>
	int main(){
	int x, i, j, m[3][3];
	 
	 for(i=0;i<3;i++)	 
	 	for(j=0;j<3;j++){
	 		printf("Elemento[%d][%d]= ",i+1 ,j+1);
	 		scanf("%d",&m[i][j]);
	 		}
	 
	 printf("\nValores Originais\n");
	 	for(i=0;i<3;i++){
	 		for(j=0;j<3;j++)
	 			printf("%d ",m[i][j]);
				 printf("\n");
	 			}
	 
	 printf("\n Digite o valor a multiplicar: ");	
	 scanf("%d", &x);		
	 			
	 for(i=0;i<3;i++)
		 for(j=0;j<3;j++)
	 		m[i][j]=m[i][j]*x;

	 printf("\nValores Multiplicados pelo valor digitado\n", &x);
	 	for(i=0;i<3;i++){
	 		for(j=0;j<3;j++)
	 		printf("%d ",m[i][j]);
			printf("\n");
	 		}
	return 0;
}

