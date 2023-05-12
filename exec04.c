#include <stdio.h>

int main(void) {

    float media = 0, geral = 0, mmenor = 0, mmaior = 0;
    int contador = 0;

    do{
        printf("\nQual a media do Aluno? ");
        scanf("%f", &media);

        contador++;

        if (media > 0){
            geral = geral + media;
        }

        if (contador == 1) {
            mmenor = media;
            mmaior = media;
        }

        if (media > 0 && media < mmenor) {
            mmenor = media;
        }

        if (media > mmaior) {
            mmaior = media;
        }
    }while(media > 0);

    contador = contador - 1;
    geral = geral / contador;

    printf("\nForam lidas %i medias!\n", contador);
    printf("A media geral e: %.2f\n", geral);
    printf("A menor media recebida e: %.2f\n", mmenor);
    printf("A maior media recebida e: %.2f\n", mmaior);

    return 0;
}
