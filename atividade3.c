#include <stdio.h>


int main(){
    float n1, n2, n3, media;
    float p1, p2, p3;
    printf("Digite a nota 01\n");
    scanf("%f%*c",&n1);
    printf("Digite a nota 02\n");
    scanf("%f%*c",&n2);
    printf("Digite a nota 03\n");
    scanf("%f%*c",&n3);
    printf("Digite o peso 01\n");
    scanf("%f%*c",&p1);
    printf("Digite o peso 02\n");
    scanf("%f%*c",&p2);
    printf("Digite o peso 03\n");
    scanf("%f%*c",&n3);
    media=(n1*p1+n2*p3*p3)/(p1+p2+p3);
    printf("A média poderada é:%.2f\n", media);




}