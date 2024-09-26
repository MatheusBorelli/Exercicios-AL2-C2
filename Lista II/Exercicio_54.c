#include <stdio.h>
#include <stdlib.h>

// O QI (quociente de inteligência) médio do brasileiro é 88.
// • Informe o QI de uma pessoa e verifique se esta acima, igual ou abaixo da média.

int main(){
    int QI;

    printf("Digite seu QI: ");
    scanf("%d", &QI);

    if(QI > 88) printf("Seu QI eh maior que a media brasileira");
    else if(QI < 88) printf("Seu QI eh menor que a media brasileira");
    else printf("Seu QI eh igual que a media brasileira");

    printf("\n");
    system("pause");
    return 0;
}