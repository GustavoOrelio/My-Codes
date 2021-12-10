#include <stdio.h>

int main() {

    int par, impar, i, NUM[15], vetPar[15], vetImpar[15];
    par = 0;
    impar = 0;

    for (i = 0; i < 15; i++) {
        printf("\nDigite o numero %d: ", i + 1);
        scanf("%d%*c", &NUM[i]);

        if (NUM[i] % 2 == 0) {
            vetPar[par] = NUM[i];
            par++;
        }
        else {
            vetImpar[impar] = NUM[i];
            impar++;
        }
    }

    printf("\nVetor Par:\n");
    for (i = 0; i < par; i++) {
        printf("%d\n", vetPar[i]);
    }

    printf("\nVetor Impar:\n");
    for (i = 0; i < impar; i++) {
        printf("%d\n", vetImpar[i]);
    }
    return 0;
}
