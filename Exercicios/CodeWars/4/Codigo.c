#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char digits [] = "126737298710198384";
    char binary [100] = "";
    int i;
    for (i = 0; digits[i] != '\0'; i++)
    {
        
        int num = digits[i] - '0';
        if (num < 5)
        {
            binary[i] = '0';
        } else{
            binary[i] = '1';
        }
    }
    binary[i] = '\0';
    printf("\n");
    printf("string escolhida foi =  %s\n", digits);
    printf("resultado binario:\n");
    printf("%s\n", binary);

    return 0;
}

//codewars
void fakeBin(const char *digits, char *binary) {
int i;
    for (i = 0; digits[i] != '\0'; i++)
    {
        
        int num = digits[i] - '0';
        if (num < 5)
        {
            binary[i] = '0';
        } else{
            binary[i] = '1';
        }
    }
    binary[i] = '\0';
}