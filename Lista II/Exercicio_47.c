#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que leia os valores A, B, C e diga se a soma de A + B é maior
// ou menor que C. Mostre uma mensagem com o resultado.



int main(){
    float A , B , C;
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    if(( A + B ) > C) printf("O valor de A + B e maior que C");
    if(( A + B ) < C) printf("O valor de A + B e menor que C");
    printf("\n");
    system("pause");
    return 0;
}