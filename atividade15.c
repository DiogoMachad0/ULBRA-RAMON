#include <stdio.h>

int main(){
    float precoFabrica, perceLucro, perceImposto, lucroDistribuidor, imposto, precoFinal;
    printf("Digite o preco de fabrica do veiculo: $");
    scanf("%f%*c", &precoFabrica);
    printf("Digite o percentual de lucro do distribuidor: $");
    scanf("%f%*c", &perceLucro);
    printf("Digite o percentual de imposto: ");
    scanf("%f%*c", &perceImposto);

    lucroDistribuidor = precoFabrica * perceLucro /100;
    imposto = precoFabrica * perceImposto /100;
    precoFinal = precoFabrica * perceImposto /100;
    printf("O lucro do distribuidor sobre um veiculo no valor de $%.2f sera de $%.2f\n", precoFabrica, lucroDistribuidor);
    printf("O valor do imposto será de $%.2f\n", precoFinal);
    printf("O preco final do veiculo ficara no valor de $%.2f\n", precoFinal);
    return 0;


}
