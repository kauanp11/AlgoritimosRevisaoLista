#include <stdio.h>

int main (void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

   if (numero % 2==0)
   {
    printf("Numero par");
   } else 
    printf("Numero impar");
   
   
    return 0;
}