#include<stdio.h>

int main() {

    char turno;

    printf("Digite um valor \n m = Manhã \n n = Noite \n t = Tarde \n Digite aqui: ");
    scanf("%c", &turno);
    

    switch (turno) {
    case 'm':
    case 'M':
        printf("Manhã \n");
        break;
    case 'N':
    case 'n':
        printf("Noite \n");
        break;
    case 't':
    case 'T':
        printf("Tarde \n");
        break;
    default:
        printf("Nenhum valor valido");
        break;
    }

    return 0;
}