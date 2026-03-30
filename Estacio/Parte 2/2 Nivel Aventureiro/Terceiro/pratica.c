#include <stdio.h>

    int main(){
        short int numero;
        printf("Digite um numero\n");
        scanf("%u", &numero);

        if (numero > 0){
            printf("o Numero é Positivo\n");
            if (numero % 2 == 0){
                printf("O numero é par\n");
            } else {
                printf("O numero é impar\n");
            }
        } else if (numero == 0){
            printf("Numero é 0\n");
        } else{
            printf("Numero é Negativo\n");
        }
        



        return 0;
    }