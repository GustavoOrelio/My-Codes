#include <stdio.h>

int main(){
    float n1,n2;
    
    printf("Informe o primeiro valor: ");
    scanf("%f",&n1);
    
    printf("Informe o segundo valor: ");
    scanf("%f",&n2);
    
    if(n1>n2){
        printf("O maior valor eh %.2f",n1);
    }
    
    else if(n2>n1){
        printf("O maior valor eh %.2f",n2);
    }
    
    else{
        printf("Os valores sao iguais");
    }

return 0;}
