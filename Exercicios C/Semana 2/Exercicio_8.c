#include <stdio.h>
#include <math.h>

int main(){
    float an,a1, r;
    int n = 10;
  
            printf("Entre com o valor do primeiro termo: ");
            scanf("%f",&a1);
            
            printf("Entre com o valor da razao: ");  
            scanf("%f",&r);
            
            an = (a1 + (n - 1) * r);
           
            printf("Decimo termo da P.A: %f",an);
            
return(0);}

