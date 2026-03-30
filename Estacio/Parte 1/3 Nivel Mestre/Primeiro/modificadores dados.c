#include <stdio.h>

int main(){

int numeroSinal = 3000000000;
unsigned int NumeroSemSinal = 3000000000;

printf("Numero Com Sinal: %d\n", numeroSinal);
printf("Numero Com Sinal: %u\n", NumeroSemSinal);



int NumeroNormal = 2147483647;
long long int NumeroGrande = 2147483647;

printf("Numero Regular (int): %d\n", NumeroNormal);
printf("Numero Grande: %lld\n", NumeroGrande);


NumeroGrande = 2147483648;

printf("Numero Grande atualizado: %lld\n", NumeroGrande);

short int NumeroPequeno = 32767;
printf("Numero Pequeno (short int): %d\n", NumeroPequeno);

NumeroPequeno = 32768;
printf("Numero Pequeno atualizado (short int): %d\n", NumeroPequeno);
    return 0;
}