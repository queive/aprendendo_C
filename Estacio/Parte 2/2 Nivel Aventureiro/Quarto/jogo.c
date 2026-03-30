#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

    int main(){
        int opcao;
        int NumeroSecreto, Palpite;
        printf("Menu Principal\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver regras\n");
        printf("3. Sair\n");
        printf("Escolha uma das opções acima\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
            printf("Digite um numero de 0 a 9\n");
            scanf("%d", &Palpite);
            srand(time(0));
            NumeroSecreto = rand() % 10;
            printf("Numero secreto %d\n", NumeroSecreto);
            if(NumeroSecreto == Palpite){
                printf("Você Acertou o Numero!");
            } else if (Palpite == NumeroSecreto - 1 || Palpite == NumeroSecreto + 1){
                printf("Você quase acertou");
            } else {
                printf("Você errou o numero secreto");
            }
            break;
            case 2:
            printf("Escolha um numero de 0 a 9\n");
            printf("Se Você acertar +3 pontos\n");
            printf("Se Você chegar perto por 1 +1 ponto\n");
            printf("Rode 10x e anote os pontos\n");
            break;
            case 3:
            printf("Saindo do jogo....");
            break;
            default:
            printf("Opção invalida");
            break;
        }
        


        return 0;
    }