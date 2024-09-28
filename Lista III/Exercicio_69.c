#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned leituras;
    float value;
    float maior = 0;
    float media = 0;
    printf("Digite a quantidade de leituras: ");
    scanf("%u", &leituras);

    for (unsigned i = 0; i < leituras; i++){
        printf("Digite um valor: ");
        scanf("%f", &value);
        if( i == 0 || value > maior ) maior = value;
        media += value;
    }
    printf("O maior numero:     \t%3.2f\n", maior);
    printf("A media dos valores:\t%3.2f\n", media/leituras);
    
    system("pause");
    return 0;
}