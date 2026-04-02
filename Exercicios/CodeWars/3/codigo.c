#include <stdio.h>
int main(){
    int valor;
    printf("Insira o Valor: \n");
    scanf("%d", &valor);
    valor = (valor * (-1));
    printf("O Valor da negativa é: %d\n", valor);


    return 0;
}

//Code Wars
/* 
    float opposite(float num) {
   num = (num * (-1));
    return num;
}
 */
