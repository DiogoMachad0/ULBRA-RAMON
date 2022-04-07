#include <stdio.h>

int main() {

    float deposito;
    int taxaJuros;

    printf("Valor do deposito: $");
    scanf("%f%*c", &deposito);
    printf("Taxa de juros: ");
    scanf("%d%*c", &taxaJuros);

    float valorRendimento = deposito - (deposito - (deposito*taxaJuros/100));
    float valorTotal = deposito + valorRendimento;

    printf("O valor do rendimento é %.2f reais e o total do valor depositado após o rendimento ficou $%.2f\n", valorRendimento, valorTotal);




}