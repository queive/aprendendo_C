#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num1 = 40, num2 = 30;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("numero maior é %d\n", maior);

    return 0;

}