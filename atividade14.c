#include <stdio.h>

int main(){
    int anoNascimento, anoAtual, idade, idadeFuturo;
    
    printf("Digite o ano de nascimento: ");
    scanf("%d%*c", &anoNascimento);
    printf("Digite o anoAtual: ");
    scanf("%d%*c", &anoAtual);

    idade = anoAtual - anoNascimento;
    idadeFuturo = 2050 - anoNascimento;
    printf("Sua idade é: %d\n", idade);
    printf("Você terá %d anos em 2050.\n", idadeFuturo);
    return 0;
    

}