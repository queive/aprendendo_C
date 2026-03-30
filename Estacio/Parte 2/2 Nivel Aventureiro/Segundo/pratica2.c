#include<stdio.h>

int main(){
short int nota;
printf("Informe a sua nota: \n");
scanf("%d", &nota);

/* A >= 90
B >= 80
C >= 70
D >= 60
E >= 50
F  */
if (nota >= 90){
    printf("Você recebeu nota A");
} else if (nota < 90 && nota >= 80){
    printf("Você recebeu nota B");
} else if (nota < 80 && nota >= 70){
    printf("Você recebeu nota C");
} else if (nota < 70 && nota >= 60){
    printf("Você recebeu nota D");
} else if (nota < 60 && nota >= 50){
    printf("Você recebeu nota E");
} else {
    printf("Você recebeu nota F");
}


    return 0;
} 