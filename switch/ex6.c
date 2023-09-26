#include<stdio.h>

int main() {

    int valor1;
    int valor2;
    int opcao;

    scanf("%d", &opcao);

    scanf("%d %d", &valor1, &valor2);


    switch (opcao)
    {
    case 1:
        if(valor1 > valor2) {
            printf("O valor 1 e maior");
        } else {
            printf("O valor 2 e maior");
        }
        break;
    case 2:
            if(valor1 > valor2) {
                printf("%d \n %d", valor2, valor1);
        } else {
                printf("%d \n %d", valor1, valor2);
        }
        break;
    default:
        if(valor1 == valor2) {
            printf("Os valores sao iguais");
        }
        break;
    }

}