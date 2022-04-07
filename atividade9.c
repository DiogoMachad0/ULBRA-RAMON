#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Base do triangulo: ");
    scanf("%f%*c", &base);
    printf("Altura do triangulo: ");
    scanf("%f%*c", &altura);
    area = (base * altura) / 2;
    print("A area de um triangulo com base de %.1f e altura de %.1f é igual a %.1f\n", base, altura, area);



}