#include <stdio.h>

int main(){

    int idade;      
    printf("Informe a sua idade\n");
    scanf("%d", &idade);
    if (idade >=18){
        printf("Você tem %d ano e é maior de idade\n" ,idade);
    } else {
        printf("você você é menor de idade");
    }
}