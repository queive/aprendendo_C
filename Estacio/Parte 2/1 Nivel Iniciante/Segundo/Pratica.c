#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqqueMinimo = 1000;

    printf("Informe a temperatura:\n");
    scanf("%f", &temperatura);
    printf("Informe a umidade:\n");
    scanf("%f", &umidade);
    printf("Informe o estoque:\n");
    scanf("%u", &estoque);

    if(temperatura > 30.0){
        printf("A temperatura está alta.\n");
    } else {
        printf("A temperatura está dentro dos parametros\n");
    }

    if (umidade > 50){
        printf("umidade elevada.\n");   
    } else {
        printf("a umidade está dentro dos parametros\n");
    }
    
    if (estoque < estoqqueMinimo){
        printf("Estoque abaixo do mínimo\n");
    } else {
        printf("Estoque Normal\n");
    }
return 0;
}