#include <stdio.h>

int main(){

    int raio;
    float pi = 3.14;

    printf("Raio do circulo: ");
    scanf("%d%*c", &raio);

    float areaCirculo = pi *(raio*raio);
    printf("0 a area do circulo é %.1f\n",  areaCirculo);


}