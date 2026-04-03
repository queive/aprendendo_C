#include <stdio.h>
#include <string.h>

int main() {
    char texto[20] = "Oi ";
    
    strcat(texto, "Joao");

    printf("%s\n", texto);
    
    return 0;
}