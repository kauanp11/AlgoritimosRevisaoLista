#include <stdio.h> 

int main (void) {
    double valorTotal = 780000;
    double ganhador1 = valorTotal * 0.46;
    double ganhador2 = valorTotal * 0.32;
    double ganhador3 = ganhador1 - ganhador2;

    printf("Ganhador 1 ganhou o total de: %.2f\n", ganhador1);
    printf("Ganhador 2 ganhou o total de: %.2f\n", ganhador2);
    printf("Ganhador 3 ganhou o total de: %.2f", ganhador3);
    
return 0;
}