#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int idade = 19;
int resultado;

resultado = idade >= 18 ? 1 : 0;

if(resultado == 1){
printf("Você é maior de idade\n"); 
} else{
printf("Você não é maior de idade\n");
}
    return 0;
}