#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite a nota 01\n");
    scanf("%f%*c",&n1);
    printf("Digite a nota 02\n");
    scanf("%f%*c",&n2);
    printf("Digite a nota 03\n");
    scanf("%f%*c",&n3);
    media=(n1+n2+n3)/3;
    printf("A média é:%.2f\n",media);
    



}
