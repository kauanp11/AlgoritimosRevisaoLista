#include <stdio.h> 

int main (void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("o numero sucessor: %d\n", numero + 1);
    printf("O numero antecessor: %d", numero - 1);

    return 0;
}