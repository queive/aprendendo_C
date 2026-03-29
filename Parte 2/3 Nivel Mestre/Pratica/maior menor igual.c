#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 +1; // numero de 1 a 100

    // inicio jogo
    printf("Bem Vindo ao jogo Mario, Menor ou Igual!\n");
    printf("Você deve escolher um numero e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("\n");
    
    printf("Escolha a comparação:\n");
    scanf(" %c", &tipoComparacao);
    
    printf("Digite o seu número (entre 1 a 100):");
    scanf("%d", &numeroJogador);

    //exibir o numero do computador
    printf("O numero do Computador é: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
            printf("Você escolheu a opção Maior\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    
    default:
        printf("Opção de Jogo invalida\n");
        break;
    }
    printf("%d", resultado);
    if (resultado == 1){
        printf("Você Venceu!\n");
    } else{
        printf("Você Perdeu\n");
    }
    
}