#include <stdio.h>

int main(void){

    int valor, npar, nimpar;

    printf("Escolha um numero entre 1 a 100: ");
    scanf("%i", &valor);
    nimpar = valor;
    npar = valor;

    printf("Os valores pares entre %i e 100 sao:\n", npar);
    if (valor % 2 == 0){
        printf("%i ", valor);
    }

    while(npar < 100){
        npar++;

        if (npar % 2 == 0){
            printf("%i ", npar);
        }

    }

    printf("\nOs valores impares entre %i e 100 sao:\n", nimpar);
    if (valor % 2 != 0){
        printf("%i ", valor);
    }

    while(nimpar < 100){
        nimpar++;

        if (nimpar % 2 != 0){
            printf("%i ", nimpar);
        }
    }

    return 0;
}
