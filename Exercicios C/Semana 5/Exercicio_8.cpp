#include<stdio.h>

int main (){
	
  int matriz[5][5],i, j;
  
  printf ("\nDigite valor para os elementos da matriz");
  
  for ( i=0; i<3; i++ )
    for ( j=0; j<3; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
    }
  
  printf("\nA matriz eh");
  
  for(int i=0; i<3; i++){
            printf("\n");
        for(int j=0; j<3; j++){
            printf(" %d",matriz[i][j]);
        }
    }
  return(0);
}
