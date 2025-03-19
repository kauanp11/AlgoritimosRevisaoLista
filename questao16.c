#include <stdio.h>

int main (void) {
    float salario, prestacao, limite;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite a sua prestacao: ");
    scanf("%f", &prestacao);

    limite = salario * 0.20;

   if (limite >= prestacao)
   {
    printf("Emprestimo nao concedido");
   } else 
    printf("Emprestimo concedio");
   
    return 0;
}