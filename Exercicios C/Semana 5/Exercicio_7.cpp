#include <stdio.h>

int main()
{
    int matriz[10][10];
    
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("informe LINHA %d / COLUNA %d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    printf("\nA matriz sem diagonal eh:");
    
    for(int i=0; i<10; i++){
        printf("\n");
        for(int j=0; j<10; j++){
            if(i==j){
                printf(" ");
            }else{
                printf(" %d",matriz[i][j]);
            }
        }
    }
    
    return 0;
}
