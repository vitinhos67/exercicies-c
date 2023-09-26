/*
Crie um programa que guarde o número de parcelas e o valor
de cada parcela, depois faça a conta do total a ser pago e
imprima na tela. Parcela = 12. Valor mensal = 150.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main() {

    int parcelas = 12;
    int valorMensal = 150;

    int valorTotal = parcelas * valorMensal;


    printf("%d", valorTotal);
    

    return 0;
}
