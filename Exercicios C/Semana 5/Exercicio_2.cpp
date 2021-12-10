#include <stdio.h>

int main(){
	
	float salario[21];
    
    for(int i=0; i<20; i++){
        printf("\nInforme o salario %d: ",i+1);
        scanf("%f",&salario[i]);
        
        salario[i] = salario[i] * 1.08;
    }
    
    for(int i=0; i<20; i++){
        printf("\nO salario %d reajustado eh %.2f",i+1,salario[i]);
    }
    return 0;
}
