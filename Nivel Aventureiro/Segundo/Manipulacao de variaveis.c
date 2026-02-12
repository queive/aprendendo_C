#include<stdio.h>

int main(){
    // Exemplo com INTEIROS
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;

    printf("Soma: %d\n", soma);
    printf("Difenreça: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
    
    
    // Exemplos Float
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y;

    printf("Soma: %.2f\n", soma);
    printf("Difenreça: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);



    return 0;
}