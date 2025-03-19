#include <stdio.h> 

int main (void) {
    float area, raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = 3.141592 * raio * raio;

    printf("Esse é o valor da area do circulo: %.2f", area);
    
    return 0;
}