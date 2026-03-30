#include <stdio.h>

int main(){
int number,Soma = 0,i = 0;
printf("informe o valor");
scanf("%d", &number);

if (number > 0);
{
    while (i < number){
            if ((i % 3 == 0) || (i % 5 == 0)){ 
                Soma = Soma + i;
            }
        i++;
    }
}
printf("Somatorio = %d", Soma);



    return 0;
}
//Para Enviar CodeWars

int solution(int number){
int Soma = 0;
int i = 0;

if (number > 0);
{
    while (i < number){
            if ((i % 3 == 0) || (i % 5 == 0)){ 
                Soma = Soma + i;
            }
        i++;
    }
}

return Soma;
}