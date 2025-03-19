#include <stdio.h>

int main (void) {
     int num1, num2;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
       printf("Numero 1 maior que o numero 2");
    }
    
    if (num2 > num1)
    {
    printf("Numero 2 maior que o numero 1");
    }
    
    if (num1 == num2)
    {
    printf("Numero iguais!");
    }
    
    return 0;
}