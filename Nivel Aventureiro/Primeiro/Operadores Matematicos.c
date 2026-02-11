#include<stdio.h>

int main(){

    /*
    Soma (+)
    Subtração(-)
    Multiplicação(*)
    Divisão(/)
    */
    
int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("Informe o Numero 1:\n");
scanf("%d", &numero1);
printf("Informe o Numero 2:\n");
scanf("%d", &numero2);
// Operação Soma
soma = numero1 + numero2;
// Operação Subtração
subtracao = numero1 - numero2;
// Operação Multiplicação
multiplicacao = numero1 * numero2;
// Operação Divisão
divisao = numero1 / numero2;
  
printf("A Soma é: %d\n", soma);
printf("A Subtração é: %d\n", subtracao);
printf("A Multiplicação é: %d\n", multiplicacao);
printf("A Divisão é: %d\n", divisao);

return 0;
}