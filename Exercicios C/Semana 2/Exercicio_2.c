#include <stdio.h>

int main() {
	
	float salario, reajuste, nsalario, desconto;
	
	printf("Informe salario atual:");
	scanf("%f", &salario);
	
	printf("Informe porcentual de reajuste:");
	scanf("%f", &reajuste);
	
    desconto = (reajuste * salario)/100;
    
    nsalario = salario + desconto;
    
    printf("O salario com reajuste eh %.2f", nsalario);
    
return(0); 

}

