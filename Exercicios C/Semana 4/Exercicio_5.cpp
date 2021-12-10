#include<stdio.h>

int fatorando(int numero);

int main(){
	
    int v;
    
    printf("Escolha um numero para fatoriarmos: ");
    scanf("%d",&v);
    
    printf("\n\nO numero fatorado eh: %d",fatorando(v));
}

int fatorando(int numero){
    int i,fat=1;
    for (i=1;i<=numero;i++)
        fat = fat * i;
    return(fat);
}
