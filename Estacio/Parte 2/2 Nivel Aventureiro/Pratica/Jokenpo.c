#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int EscolhaJogador, Escolhacomputador;
srand(time(0));
printf("*** Jogo de Jokenpo ***\n");
printf("\n");
printf("Escolha uma opção:\n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");
printf("Escolha: \n");
scanf("%d", &EscolhaJogador);
printf("\n");
Escolhacomputador = rand() % 3 + 1; 

switch (EscolhaJogador)
{
case 1:
    printf("Jogador escolheu Pedra - ");
    break;
case 2:
    printf("Jogador escolheu Papel - ");
    break;
case 3:
    printf("Jogador escolheu Tesoura - ");
    break;

default:
printf("Opção Invalida - ");
    break;
}

if (EscolhaJogador == 1 || EscolhaJogador == 2 || EscolhaJogador == 3)
{
    switch (Escolhacomputador)
{
case 1:
    printf("Computador: Pedra\n");
    break;
case 2:
    printf("Computador: Papel\n");
    break;
case 3:
    printf("Computador: Tesoura\n");
    break;
}
printf("\n");

if (Escolhacomputador == EscolhaJogador){
    printf("### Jogo Empatado ###\n");
} else if (
(EscolhaJogador == 1) && (Escolhacomputador == 3) || 
(EscolhaJogador == 2) && (Escolhacomputador == 1) ||
(EscolhaJogador == 3) && (Escolhacomputador == 2)
){
    printf("### Jogador Ganhou ###\n");
} else {
    printf("### Computador Ganhou ###");
}
} else{
    printf("Jogo encerrado");
}





    return 0;
}