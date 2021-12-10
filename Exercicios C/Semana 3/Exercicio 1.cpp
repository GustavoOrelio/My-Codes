#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[20]; 
	
	
	while (strcmp(palavra, "fim")!=0){
		printf("\nDigite uma palavra:");
		scanf("%s", palavra);
			      
		
		if(strcmp(palavra, "fim")==0){
			break;
		}         
		
		printf("\nA palavra digitada eh: %s", palavra);        
	}
	return(0);	
	}

