#include <stdio.h>

    int main(){
        char variavel;
        printf("Digite um Valor\n");
        scanf(" %c", &variavel);
        switch (variavel) {
            case 'a':
            printf("a ser executado se variavel == valor a\n");
            printf("teste do valor a");
            break;
            case 'b':
            printf(" a ser executado se variavel == valor b\n");
            printf("teste do valor b");
            break;
            default:
            printf("a ser executado se variavel não for nenhum dos valores acima\n");
        }



        return 0;
    }