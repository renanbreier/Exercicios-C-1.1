#include <stdio.h>

int main(void){

    int contador = 0, total = 0;
    float valores;

    do{
        contador++;
        printf("\n%i - Digite um valor: ", contador);
        scanf("%f", &valores);

        if (valores > 0){
            total = total + 1;
        }
    }while(contador < 15);

    printf("Foram digitados %i numeros positivos", total);

    return 0;
}
