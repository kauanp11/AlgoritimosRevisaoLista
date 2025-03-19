#include <stdio.h> 

int main (void) {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0/5.0) + 32;

    printf("Esse é seu valor em fahrenheit: %.2f", fahrenheit);
    return 0;
}