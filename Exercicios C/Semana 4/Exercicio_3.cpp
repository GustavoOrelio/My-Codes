#include <stdio.h>

int main(){
    int i, numeros[10],soma = 0;
    for (i = 0; i <=9; i++){
        printf("Digite o valor do numero %d: ",(i+1));
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i <=9; i++){
        if(numeros[i]%7==0){
            printf("%d eh divisivel por 7\n",numeros[i]);
            soma += 1;
        }
    }
    printf("Temos %d numeros multiplos de 7.",soma);
    
return 0;
}
