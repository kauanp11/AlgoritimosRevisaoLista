#include <stdio.h> 

int main (void) {
    int num1, num2, num3, soma;
    
    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);
    printf("Escreva o segundo numero: ");
    scanf("%d", &num2);
    printf("Escreva o terceiro numero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("A soma dos tres numeros é igual a %d", soma);
    
    return 0;
}