#include <stdio.h>
#include <stdlib.h>

#define ITER 500

int main(){
    float value = 0;
    float maior = 0;
    float menor = 0;
    float media = 0;
    for (unsigned i = 0; i < ITER; i++){
        printf("Digite um valor: ");
        scanf("%f", &value);
        if(i == 0 || value > maior ) maior = value;
        if(i == 0 || value < menor ) menor = value;
        media += value;
    }
    printf("O maior numero:     \t%3.2f\n", maior);
    printf("O menor numero:     \t%3.2f\n", menor);
    printf("A media dos numeros:\t%3.2f\n", media / ITER );
    system("pause");
    return 0;
}