#include <stdio.h>

int main() {
    float salario, aumento, novoSalario;

    printf("Digite o valor do seu salario para receber seu merecido aumento: $");
    scanf("%f%*c", &salario);

    aumento = salario * 25/100;
    novoSalario = salario + aumento;

    printf("Seu novo salario é: $%.2f\n", novoSalario);

}