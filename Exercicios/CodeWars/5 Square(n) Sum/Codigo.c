#include <stdio.h>

int main() {
 printf("informe os valores dos números abaixo\n");
 int count = 0;
for (int i = 0; i < 3 ; i++)
{
    int values[3];
    printf("Informe o valor numero %d\n", (i+1));
    scanf("%d", &values[i]);
    values[i] = values[i] * values[i]; 
    count = count + values[i];
}
printf("valor da soma é: %d\n", count);

return 0; 
}
//codewars:

int square_sum(const int values[/* count */], size_t count)
{
    int sum = 0; 
    for (size_t i = 0; i < count; i++)
    {
        sum += values[i] *  values[i];
    }
    
	return sum;
}