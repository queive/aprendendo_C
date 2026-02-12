#include <stdio.h>
    

    int main(){
    /*
        //Conversão implícita
        int a = 10;
        float b = 3.5;
        float resultado = a + b;

        printf("Resultado: %.2f\n", resultado);*/
        //Conversão explícita (casting)

        int a = 10;
        int b = 3;
        float quociente = (float) a / b;

        printf("Quociente: %.2f\n", quociente);



    
    return 0;
    }