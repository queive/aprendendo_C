/*
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/
#include<stdio.h>
int main(){
/* 
 // *********** Cadastro Manual Carta 1 ****************

 // Variaveis Primeira Carta

char estadoA;
char CodcartaA[4];
char nomeA[20];
unsigned long int populacaoA;
int TuristicoA;
float AreaA, PibA;

printf("Cadastro da Carta A\n");
printf("\n");
printf("Informe o estado -  A: \n");
scanf(" %c", &estadoA);
printf("Informe o Codigo da Carta - A: \n");
scanf("%s", &CodcartaA);
printf("(Utilize (_) como espaço) Informe o nome da cidade da carta - A: \n");
scanf("%s", &nomeA);
printf("Informe o numero da população da carta - A: \n");
scanf("%i", &populacaoA);
printf("Informe o tamanho da Área(km²) da carta - A: \n");
scanf("%f", &AreaA);
printf("Informe o valor do PIB em bilhões de Reais da carta - A: \n");
scanf("%f", &PibA);
printf("Informe o Número de pontos turisticos da carta - A: \n");
scanf("%i", &TuristicoA); */


//*********** Cadastro Automatico Carta 1 ******************
char estadoA = 'A';
char CodcartaA[4] = "A01";
char nomeA[20] = "São_Paulo";
unsigned long int populacaoA = 12325000;
int TuristicoA = 50;
float AreaA = 1521.11, PibA = 699.28;

/* 
//******** Cadastro Manual Carta 2 ************
//Variaveis Segunda Carta

char EstadoB;
char CodcartaB[4];
char nomeB[20];
unsigned long int populacaoB;
int TuristicoB;
float AreaB, PibB;


printf("\n");
printf("Cadastro da Carta B\n");
printf("\n");
printf("Informe o estado -  B: \n");
scanf(" %c", &EstadoB);
printf("Informe o Codigo da Carta - B: \n");
scanf("%s", &CodcartaB);
printf("(Utilize (_) como espaço) Informe o nome da cidade da carta - B: \n");
scanf("%s", &nomeB);
printf("Informe o numero da população da carta - B: \n");
scanf("%i", &populacaoB);
printf("Informe o tamanho da Área(km²) da carta - B: \n");
scanf("%f", &AreaB);
printf("Informe o valor do PIB em bilhões de Reais da carta - B: \n");
scanf("%f", &PibB);
printf("Informe o Número de pontos turisticos da carta - B: \n");
scanf("%i", &TuristicoB);
 */

// ************** Cadastro Automatico Carta 2 *****************
char EstadoB = 'B';
char CodcartaB[4] = "B02";
char nomeB[20] = "RIo_de_Janeiro";
unsigned long int populacaoB = 6748000;
int TuristicoB = 30;
float AreaB = 300.50, PibB = 300.50;


//Densidade Populacional
float DensidadePOPA = (float) (populacaoA / AreaA);
float DensidadePOPB = (float) populacaoB / AreaB;

//PIB per Capita
float PIBperA = (float) (PibA * 1000000000) / populacaoA;
float PIBperB = (float) (PibB * 1000000000) / populacaoB;

//super poder
float SuperA = (float) (populacaoA + TuristicoA + AreaA + PibA + PIBperA) - DensidadePOPA;
float SuperB = (float) (populacaoB + TuristicoB + AreaB + PibB + PIBperB) - DensidadePOPB;

// calculo
//Retorno
printf("\n");
printf("Carta 1:\n");
printf("1° Carta Estado escolhido foi: %c\n", estadoA);
printf("1° Carta codigo foi: %s\n", CodcartaA);
printf("1° Carta nome escolhido foi: %s\n", nomeA);
printf("1° Carta número da população é: %i\n", populacaoA);
printf("1° Carta tamanho da área é: %.2fkm²\n", AreaA);
printf("1° Carta Valor do PIB é: %.2f Bilhões de Reais\n", PibA);
printf("1° Carta Número de pontos Turísticos é: %i\n", TuristicoA);
printf("1° Carta Densidade Populacional: %.2f hab/km²\n", DensidadePOPA);
printf("1° Carta PIB per Capita: %.2f reais\n", PIBperA);

printf("\n");
printf("Carta 2:\n");
printf("2° Carta Estado escolhido foi: %c\n", EstadoB);
printf("2° Carta codigo foi: %s\n", CodcartaB);
printf("2° Carta nome escolhido foi: %s\n", nomeB);
printf("2° Carta número da população é: %i\n", populacaoB);
printf("2° Carta tamanho da área é: %.2fkm²\n", AreaB);
printf("2° Carta Valor do PIB é: %.2f Bilhões de Reais\n", PibB);
printf("2° Carta Número de pontos Turísticos é: %i\n", TuristicoB);
printf("2° Carta Densidade Populacional: %.2f hab/km²\n", DensidadePOPB);
printf("2° Carta PIB per Capita: %.2f reais\n", PIBperB);

int comparacao;
printf("\n");
printf("Comparação de cartas:\n");
printf("1. Nome do país\n");
printf("2. População\n");
printf("3. Área\n");
printf("4. PIB\n");
printf("5. Número de pontos turísticos\n");
printf("6. Densidade Demográfica\n");
printf("Escolha uma das opções Acima:\n");
scanf("%d", &comparacao);

switch (comparacao)
{
case 1:
    printf("Carta 1 : %s\n", nomeA);
    printf("Carta 2 : %s\n", nomeB);
    break;
case 2:
    if (populacaoA == populacaoB){
        printf("População Carta A - %s = %i\n",nomeA, populacaoA);
        printf("População Carta B - %s = %i\n",nomeB, populacaoB);
        printf("Empate\n");
    } else if (populacaoA > populacaoB){
        printf("População Carta A - %s = %i\n",nomeA, populacaoA);
        printf("População Carta B - %s = %i\n",nomeB, populacaoB);
        printf("Carta A - %s Venceu !\n", nomeA);
    } else {
        printf("População Carta A - %s = %i\n",nomeA, populacaoA);
        printf("População Carta B - %s = %i\n",nomeB, populacaoB);
        printf("Carta B - %s Venceu !\n", nomeB);
    }
    break;
case 3:
if (AreaA == AreaB){
        printf("Área Carta A - %s = %.2f\n",nomeA, AreaA);
        printf("Área Carta B - %s = %.2f\n",nomeB, AreaB);
        printf("Empate\n");
    } else if (AreaA > AreaB){
        printf("Área Carta A - %s = %.2f\n",nomeA, AreaA);
        printf("Área Carta B - %s = %.2f\n",nomeB, AreaB);
        printf("Carta A - %s Venceu !\n", nomeA);
    } else {
        printf("Área Carta A - %s = %.2f\n",nomeA, AreaA);
        printf("Área Carta B - %s = %.2f\n",nomeB, AreaB);
        printf("Carta B - %s Venceu !\n", nomeB);
    }
    break;
case 4:
if (PibA == PibB){
        printf("PIB Carta A - %s = %.2f\n",nomeA, PibA);
        printf("PIB Carta B - %s = %.2f\n",nomeB, PibB);
        printf("Empate\n");
    } else if (PibA > PibB){
        printf("PIB Carta A - %s = %.2f\n",nomeA, PibA);
        printf("PIB Carta B - %s = %.2f\n",nomeB, PibB);
        printf("Carta A - %s Venceu !\n", nomeA);
    } else {
        printf("PIB Carta A - %s = %.2f\n",nomeA, PibA);
        printf("PIB Carta B - %s = %.2f\n",nomeB, PibB);
        printf("Carta B - %s Venceu !\n", nomeB);
    }
break;
case 5:
if (TuristicoA == TuristicoB){
        printf("Pontos Turistico Carta A - %s = %i\n",nomeA, TuristicoA);
        printf("Pontos Turistico Carta B - %s = %i\n",nomeB, TuristicoB);
        printf("Empate\n");
    } else if (TuristicoA > TuristicoB){
        printf("Pontos Turistico Carta A - %s = %i\n",nomeA, TuristicoA);
        printf("Pontos Turistico Carta B - %s = %i\n",nomeB, TuristicoB);
        printf("Carta A - %s Venceu !\n", nomeA);
    } else {
        printf("Pontos Turistico Carta A - %s = %i\n",nomeA, TuristicoA);
        printf("Pontos Turistico Carta B - %s = %i\n",nomeB, TuristicoB);
        printf("Carta B - %s Venceu !\n", nomeB);
    }
break;
case 6:
if (DensidadePOPA == DensidadePOPB){
        printf("Densidade Demográfica Carta A - %s = %.2f\n",nomeA, DensidadePOPA);
        printf("Densidade Demográfica Carta B - %s = %.2f\n",nomeB, DensidadePOPB);
        printf("Empate\n");
    } else if (DensidadePOPA < DensidadePOPB){
        printf("Densidade Demográfica Carta A - %s = %.2f\n",nomeA, DensidadePOPA);
        printf("Densidade Demográfica Carta B - %s = %.2f\n",nomeB, DensidadePOPB);
        printf("Carta A - %s Venceu !\n", nomeA);
    } else {
        printf("Densidade Demográfica Carta A - %s = %.2f\n",nomeA, DensidadePOPA);
        printf("Densidade Demográfica Carta B - %s = %.2f\n",nomeB, DensidadePOPB);
        printf("Carta B - %s Venceu !\n", nomeB);
    }
    break;
default:
    printf("Opção invalida - Jogo Encerrado\n");
    break;
}
    return 0;
}