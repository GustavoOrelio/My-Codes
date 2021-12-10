#include <stdio.h>

int main()
{
    int x[2];
    int y[2];
    int v[2];
    
    for(int i=0; i<2; i++){
        printf("Informe o valor %i de X: ",i+1);
        scanf("%d",&x[i]);
    }
    
    for(int i=0; i<2; i++){
        printf("Informe o valor %i de Y: ",i+1);
        scanf("%d",&y[i]);
    }
    
    for(int i=0; i<2; i++){
        printf("Informe o valor %i do ponto: ",i+1);
        scanf("%d",&v[i]);
    }
    
    if(v[0] < x[0]){
        printf("\nO ponto encontra-se FORA do retangulo");
    }
    else if(v[1] > y[1]){
        printf("\nO ponto encontra-se FORA do retangulo");
    }
    else{
        printf("\nO ponto encontra-se DENTRO do retângulo");
    }
    
    
}
