#include <stdio.h>

int main() {
float salario, novoSalario;
int percentualAumento, aumento;

printf("Salario: $");
scanf("%f%*c", &salario);
printf("Percentual de aumento: ");
scanf("%d%*c", &percentualAumento);

aumento = salario*percentualAumento/100;
novoSalario = salario + aumento;

printf("Valor do aumento: &%d\n", aumento);
printf("Novo salario %.2f\n", novoSalario);
return 0;



}