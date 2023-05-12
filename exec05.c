#include <stdio.h>

int main(void){

    int x = 5, y = 0;
    int funca, funcb, funcc;

    printf("Considerando as funcoes:\n"
            " A - f(x, y) = (3x) * (3x) + (y * y)\n"
            " B - f(x, y) = 2 * (x * x) + (5 * y) * (5 * y)\n"
            " C - f(x, y) = -100 * x + y * y * y\n");

    printf("Escolha um valor para X, entre 1 e 50: ");
    scanf("%i", &x);

    printf("\n Agora escolha um valor para Y, entre 1 e 50: ");
    scanf("%i", &y);

    if (x < 1 || x > 50){
        printf("Entre com um valor entre 1 e 50 para X\n");
        printf("Escolha um valor para X: ");
        scanf("%i", &x);
    }

    if (y < 1 || y > 50){
        printf("Entre com um valor entre 1 e 50 para Y\n");
        printf("Escolha um valor para Y: ");
        scanf("%i", &y);
    }

    funca = (3*x)*(3*x) + (y*y);
    funcb = 2*(x*x) + (5*y)*(5*y);
    funcc = (-100 * x) + (y*y*y);

    if (funca > funcb && funca > funcc){
        printf("Para X = %i e Y = %i, o maior resultado e o da funcao A", x, y);
    }else if(funcb > funca && funcb > funcc){
        printf("Para X = %i e Y = %i, o maior resultado e o da funcao B", x, y);
    }else{
        printf("Para X = %i e Y = %i, o maior resultado e o da funcao C", x, y);
    }



    return 0;
}
