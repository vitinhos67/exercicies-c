/*
Crie um programa que guarde o número de pessoas e o
número de pizza, depois faça a conta para dividir as pizzas
igualmente entre todas as pessoas e imprima na tela. Pessoas
= 4. Pizza = 2.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {

    int numeroDePessoas = 4;
    int numeroDePizzas = 2;

    int r = numeroDePessoas / numeroDePizzas;

    printf("%d \n", r);


    return 0;
}