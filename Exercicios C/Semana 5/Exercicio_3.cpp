#include <stdio.h>

int main(){
	int n[20];
	int n2[20];
	int aux, nd;
	
	for(int i=0; i<20; i++){
		printf("Informe o valor %d da primeira lista: ",i+1);
		scanf("%d", &n[i]);
	}
	
	for(int i=0; i<20; i++){
		printf("Informe o valor %d da segunda lista: ",i+1);
		scanf("%d", &n2[i]);
	}
	
	for(int i=0; i<20; i++){
		for(int j=0; j<20; j++){
			if(n[i] == n2[j]){
				if(aux == n[i]){
					nd+=1;
				} else{
					printf("\nO valor %d eh comum entre os vetores.", n[i]);
				}
				aux = n[i];
			}
		}
	}
	return(0);
}
