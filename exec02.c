#include <stdio.h>

int main(void){

    int produto, quantidade;
    float total;

    printf("Codigo - Produto - Preco\n"
           "1 - Chocolate - R$ 5,00\n"
           "2 - Manteiga- R$ 9,90\n"
           "3 - Macarrao Espaguete - R$ 7,80\n"
           "4 - Creme dental - R$ 8,50\n"
           "5 - Sabao em po - R$ 16,90\n");

    printf("Qual o Codigo do produto desejado? ");
    scanf("%i", &produto);

    if (produto < 1 || produto > 5){
        printf("Digite um codigo valido!\n");
        printf("Qual o Codigo do produto desejado? ");
        scanf("%i", &produto);
    }

    printf("\nQual a quantidade desejada? ");
    scanf("%i", &quantidade);

    switch(produto){
        case 1:
            total = (quantidade * 5);
            printf("O total a ser pago e R$ %.2f", total);
            break;

        case 2:
            total = (quantidade * 9.90);
            printf("O total a ser pago e R$ %.2f", total);
            break;

        case 3:
            total = (quantidade * 7.80);
            printf("O total a ser pago e R$ %.2f", total);
            break;

        case 4:
            total = (quantidade * 8.50);
            printf("O total a ser pago e R$ %.2f", total);
            break;

        case 5:
            total = (quantidade * 16.90);
            printf("O total a ser pago e R$ %.2f", total);
            break;
    }



    return 0;
}
