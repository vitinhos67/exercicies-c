#include<stdio.h>


int main() {

    float valor;

    printf("Digite o valor ganhado: \n");
    scanf("%f", &valor);

    float primeiroGanhador = (45 / valor);
    float segundoGanhador = (30 / valor);
    float terceiroGanhador = (25 / valor);

    printf("Ganhador 1: %.2f \nGanhador 2: %.2f \nGanhador 3: %.2f \n", primeiroGanhador, segundoGanhador, terceiroGanhador);


    return 0;


}