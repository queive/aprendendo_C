#include<stdio.h>
int main(){
int opcao;
float saque;
float saldo = 1000.00;
printf("informe a opção abaxo:\n");
printf("1. verifica saldo\n");
printf("2. fazer deposito\n");
printf("3. Fazer saque\n");
printf("\n");
scanf("%d", &opcao);

switch (opcao){
    case 1:
    printf("seu saldo é: %.2f R$\n", saldo);
    break;
    case 2:
    printf("Digite o banco que deseja depositar\n");
    printf("Digite a agencia que deseja depositar\n");
    printf("Digite a conta que deseja depositar\n");
    break;
    case 3:
    printf("Digite o Valor a Sacar\n");
    scanf("%f",  &saque);
    if(saque > saldo){
        printf("Operação invalida saque maior que o saldo");
    } else {
        saldo = saldo - saque;
        printf("Operação realizada o seu saldo restante é %.2f R$\n",saldo);
    }
    break;
    default:
    printf("Não foi digitado uma opção valida\n");
}
    return 0;
}