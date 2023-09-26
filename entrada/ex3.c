#include<stdio.h>
#include<stdlib.h>


int main() {

    char nomeAluno[50];
    int faltas;



    printf("Digite o seu nome: \n");
    scanf("%s", *&nomeAluno);

    printf("Digite seu numero de faltas: \n");
    scanf("%d", &faltas);

    double porcentagem = (faltas / 10.0) * 100.0;

    printf("A porcentagem de faltas do aluno(a) %s é: %.2lf porcento \n", nomeAluno, porcentagem);

    return 0;
}