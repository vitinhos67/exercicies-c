#include <stdio.h>
int main () {
int a = 22;
int b = 3;
int aux;
a = b;
aux = a;
a = aux;
b = aux;
a = a + a;
printf("%d\n", a);
return 0;
}