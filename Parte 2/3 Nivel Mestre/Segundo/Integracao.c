#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento  de Estudantes\n");
    printf("1. Calcular média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);
        //Testar se a nota é invalida
        if((nota1 < 0 || nota1 >10) || (nota2 < 0 || nota2 >10)){
            printf("Valores Incorretos\n");
        } else {
            media = (nota1 + nota2)/2;
            printf("média é %.2f\n", media);
        }
        break;
    case 2:
        printf("Entrar com a média: ");
        scanf("%f", &media);
        if(media > 10 || media < 0) {
            printf("valor da média invalido\n");
        } else {
        media >= 5 ? printf("Aprovado\n") : printf("reprovado\n"); 
        }
        break;
    case 3:

        break;
    default:
    printf("Opção Invalida, Tente novamente.");
        break;
    }
}