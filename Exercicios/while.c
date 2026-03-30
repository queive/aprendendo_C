#include <stdio.h>

int main(){

    int i=1, X;
    printf ("Informe o valor de X");
    scanf("%d", &X);

    while (i <= X){
        printf("%d ", i);
        i++;
    }
    return 0;
}