/*
Crie um programa em C que leia o valor de um produto e o
desconto que será aplicado a ele. Depois imprima o seu valor,
após o desconto, com somente duas casas decimais.
Utilize o desconto em decimal. Ex: 10% = 0.10.
*/

#include<stdio.h>


int main() {

    float valorProduto;
    float valorDesconto;

    printf("Digite o valor do produto e tambem do desconto (EX: 12 20): \n");
    scanf("%f %f", &valorProduto, &valorDesconto);

    float r = (valorDesconto / valorProduto) * 100.0;
    float valorComDesconto = valorProduto - r;

    printf("Valor: %.2f, Desconto: %.2f, Valor Com desconto: %.2f \n", valorProduto, valorDesconto, valorComDesconto);

    return 0;
}