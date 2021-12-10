#include <stdio.h>
#include <math.h>

int main(){
	
    float a1,r,an,q = 1;
    int n = 5;
    
            printf("Entre com o valor do primeiro termo: ");
            scanf("%f",&a1);
            
            printf("Entre com o valor da razao: ");
            scanf("%f",&r);     
            
            an = (a1 * pow(q,n-1));
            
            printf("Quinto termo da P.G: %f",an);
            
return(0);}
