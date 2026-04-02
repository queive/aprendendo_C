#include <stdio.h>
#include <string.h>

int main(){
    char palavra [100];
    int tamanho;
    printf("insira a palavra para ser analisada");
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    
    //printf("o tamanho de letras da palavra é :%d\n" ,tamanho);
    for (int i = 1; i < (tamanho -1) ; i++)
    {
            printf("%c\n", palavra[i]);        
    }
    //Codigo do Codewars
    






    return 0;
}