#include <stdio.h>

int main(){
	
    int matriz[10][10];
    
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("informe LINHA %d / COLUNA %d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    printf("A diagonal da matriz é:");
    
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("\n%d",matriz[i][j]);
            i+=1;
        }
    }
    return 0;
}
