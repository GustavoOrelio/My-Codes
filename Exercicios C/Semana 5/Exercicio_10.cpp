#include <stdio.h>

int main(){

	int A[4][4], B[4][4] ,soma[4][4];

  	for(int i=0;i<4;++i){
  	 for(int j=0;j<4;++j){
     	printf("A[%d][%d]: ",i,j);
     	scanf("%d", &A[i][j]);
   		}
  	}

  	printf("\n");

  	for(int i=0;i<4;++i){
   	 for(int j=0;j<4;++j){
     	printf("B[%d][%d]: ",i,j);
     	scanf("%d", &B[i][j]);
   		}
  	}
  	
	printf("\nA soma da matriz eh"); 
  	printf("\n");


  	for(int i=0;i<4;++i){
   	 for(int j=0;j<4;++j){
     	soma[i][j] = A[i][j] + B[i][j];
     	printf("%d\t",soma[i][j]);
      if (j==2){
	  	printf("\n");
	  }
    }
  }
	return(0);
 }
