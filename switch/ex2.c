#include<stdio.h>

int main() {


    int conversao;
    float valor1;

    printf("Digite 1 para converter para dolar ou 2 para real \n Digite aqui: \n");
    scanf("%d", &conversao);

    printf("Digite a origem de origem e logo em sequida a de destino: \nDigite Aqui: \n");
    scanf("%f", &valor1);


    switch(conversao) {

        case 1:
            printf("%.2f", valor1 / 4.93);
            break;
        
        case 2:
            printf("%.2f", valor1 * 4.93);
            break;
    }


    return 0;
}