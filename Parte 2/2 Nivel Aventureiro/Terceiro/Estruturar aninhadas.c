#include<stdio.h>>

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

} else{
    printf("você não atende ao criterio devido a idade");
}

    return 0;
}