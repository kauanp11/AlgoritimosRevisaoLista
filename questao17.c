#include <stdio.h>
#include <math.h>

int main (void) {
    float a, b, c, delta, x1, x2;
    

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Nao é uma equacao do segundo grau");
    } else {
    
    delta = pow(b,2) - 4 * a * c;

    if (delta < 0)
    {
        printf("Nao existe raiz real.");
    } else if (delta == 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("%.2f Raizes identicas", x1);
    }
    
    else 
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("O valor das raizes é de: %.2f %.2f", x1, x2);
    }
}
    
    return 0;
}