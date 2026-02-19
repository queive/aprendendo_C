#include<stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf ("Digite a sua idade: ");
    scanf("%d", &idade);
    printf ("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu Nome: ");
    scanf("%s", &nome);
    printf("Digite a opção: ");
    scanf(" %c", &opcao);

    printf ("A idade da pessoa é %d\n", idade);
    printf ("A sua altura é: %f\n", altura);              
    printf ("O seu Nome é %s\n", nome);
    printf("A opção selecionada é a letra: %c\n", opcao);
    return 0;
}