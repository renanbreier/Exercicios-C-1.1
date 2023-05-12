#include <stdio.h>

int main(void) {

    int produto = 1, quantidade;
    float total, desconto, totald;

    printf("Codigo - Produto - Preco\n"
           "1 - Chocolate - R$ 5,00\n"
           "2 - Manteiga- R$ 9,90\n"
           "3 - Macarrao Espaguete - R$ 7,80\n"
           "4 - Creme dental - R$ 8,50\n"
           "5 - Sabao em po - R$ 16,90\n"
           "6 - Finalizar...\n");

    do{

        printf("Qual o Codigo do produto desejado? ");
        scanf("%i", &produto);

        if (produto < 1) {
            printf("Digite um codigo valido!\n");
            printf("Qual o Codigo do produto desejado? ");
            scanf("%i", &produto);
        }

        if (produto == 6)continue;

        printf("Qual a quantidade desejada? ");
        scanf("%i", &quantidade);

        switch (produto) {
            case 1:
                total = total + (quantidade * 5);
                break;

            case 2:
                total = total + (quantidade * 9.90);
                break;

            case 3:
                total = total + (quantidade * 7.80);
                break;

            case 4:
                total = total + (quantidade * 8.50);
                break;

            case 5:
                total = total + (quantidade * 16.90);
                break;
        }

    }while (produto >=1 && produto <= 5);

    if (total > 100){
        desconto = total / 10;
        totald = total - desconto;
        printf("\nO valor total da compra foi de R$ %.2f e com o desconto de 10% = R$ %.2f o total a ser pago e R$ %.2f", total, desconto, totald);

    }else{
        printf("\nO valor total a ser pago e R$ %.2f", total);
    }

    return 0;
}
