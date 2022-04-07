#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d%*c", &numero);

    int aoQuadrado = pow(numero, 2);
    int aoCubo = pow(numero, 3);
    float raizQuadrada = sqrt(numero);
    float raizCubica = cbrt(numero);

    printf("O numero %d ao quadrado é: %d\n", numero, aoQuadrado);
    printf("O numero %d ao cubo é: %d\n", numero, aoCubo);
    printf("A raiz quadrada do numero %d é: %.2f\n", numero, raizQuadrada);
    printf("A raiz cubica do numero %d é: %.2f\n", numero, raizCubica);
    return 0;

}