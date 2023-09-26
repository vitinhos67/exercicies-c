#include<stdio.h>

int main() {
    

    float a,b;

    printf("Digite dois valores: \n");
    scanf("%f %f", &a, &b);


    if(a > b) {
       printf("A maior que B");
    } 

    if(a < b) {
        printf("A menor que b");
    }

    if(a == b) {
        printf("A igual a B");
    }



    return 0;    
}