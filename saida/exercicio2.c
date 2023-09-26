/*
Crie um programa que guarde o salário e as contas para pagar,
depois faça a conta para encontrar o restante e imprima na
tela. Salário = 2000. Conta1 = 380. Conta2 = 160. Conta3 =
420. Conta4 = 500. Conta5 = 38
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {

    int salario = 2000,conta1 = 380,conta2 = 160,conta3 = 420,conta4 = 500,conta5 = 38;


    int restante = salario - (conta1 + conta2 + conta3 + conta4 + conta5);

    printf("%d \n", restante);

    return 0;
}