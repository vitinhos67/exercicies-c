#include<stdio.h>


int main() {

    int ano;

    printf("Digite o ano de nascimento: \n");

    scanf("%d", &ano);

    if((2023 - ano) < 16) {
        printf("Voce nao pode votar \n");
    } else {
        printf("Vai la e vota \n");
    }


    return 0;
}