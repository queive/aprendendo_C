#include<stdio.h>

int main(){
int idade, dependentes;
float renda;
printf("informe a sua idade\n");
scanf("%d", &idade);
printf("Informe a sua renda\n");
scanf("%f", &renda);
printf("Informe o numeros de dependentes\n");
scanf("%d", &dependentes);

if (idade >= 18 && idade < 65){
    if(renda < 3000) {
        if(dependentes > 2){
            printf("Você atende a todos os criterios\n");
        } else {
            printf("Você não atende ao criterio dependentes\n");
        }
        
    }else{
        printf("Voce não atende ao criterio devido a renda\n");
    }
} else{
    printf("você não atende ao criterio devido a idade\n");
}

    return 0;
}