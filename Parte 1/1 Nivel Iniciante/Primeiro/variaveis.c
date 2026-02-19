#include <stdio.h>
/*
int idade;     // Declara uma variável inteira chamada "idade" 
float altura;   // Declara uma variável de ponto flutuante chamada "altura" 
double salario; // Declara uma variável de ponto flutuante de dupla precisão chamada "salario" 
char opcao;    // Declara uma variável de caractere chamada "opcao"
*/
int main(){
    int idade;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 90.5;
    char letra = 'Q';
    char nome[20] = "Queive";
    
    idade = 25;

    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2f\n", peso);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);

    
    return 0;
}