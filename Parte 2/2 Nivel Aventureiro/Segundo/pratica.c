#include <stdio.h>

    int main(){
        short int idade;
        printf("Digite a sua idade:\n");
        scanf("%d", &idade);
        
        if (idade < 12){
            printf("Você é uma criança!");
        } else if (idade >= 12 && idade < 18 ){
            printf("Você é um adolecente!");
        } else if (idade >= 18 && idade < 60 ){
            printf("Você é um adulto!");
        } else {
            printf("Você é um idoso!");
        }

        
        
        
        
        
        
        
        
        
        return 0;
    }