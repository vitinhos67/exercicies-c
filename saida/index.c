#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {

    // Exercicio 1

    char name[50] = "Victor";
    printf("%s \n", name);

    // Exercicio 2

    char email[50] = "email@email.com";

    printf("%s \n",email);

    // Exercicio 3


    char nomestark[50] = "Tony stark";
    char codinome[50] = "Home de ferro";
    int armadura = 93;

    printf("%s, %s, %d \n", nomestark, codinome, armadura);


    // Exercicio 4

    char rua[50] = "RUA AGOSTINHO CARRARA";
    char bairro[50] = "CEntro";
    int numero = 10;
    char cidade[50] = "Rio de janeiro";
    char estado[50] = "Minas gerais";

    printf("%s, %s, %d, %s, %s \n", rua, bairro, numero, cidade, estado);

    // Exercicio 5


    char bandaNome[50] = "Palace";
    char titulo[50] = "Have faith";
    int anoLancamento = 2014;
    char letra[50] = "BLLLEEEEEE BE BRAVEEEEEEEEE, NNNNNNNEEE EEEEEE HAVE FAITH";


    printf("%s, %s, %d, %s \n", bandaNome, titulo, anoLancamento, letra);


    // Exercicio 6


    bool parcela1 = false;
    bool parcela2 = false;
    bool parcela3 = true;

    printf("Parcela 1: %d, Parcela 2: %d, Parcela 3: %d \n", parcela1, parcela2, parcela3);

    return 0;
}