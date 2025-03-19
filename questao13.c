#include <stdio.h>
#include <math.h>

int main (void) {
    float h, a, b;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    h = sqrt(pow(a,2) + pow(b,2));

    printf("Esse é o valor da hipotenusa do triangulo: %.2f", h);
    
    return 0;
}