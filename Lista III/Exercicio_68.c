#include <stdio.h>
#include <stdlib.h>

int main(){
    float value = 0;
    float maior = 0;
    float menor = 0;

    for (unsigned i = 0; i < 100; i++){
        printf("Digite um valor: ");
        scanf("%f", &value);
        if(i == 0 || value > maior ) maior = value;
        if(i == 0 || value < menor ) menor = value;
    }
    printf("O maior numero:\t%3.2f\n", maior);
    printf("O menor numero:\t%3.2f\n", menor);
    
    system("pause");
    return 0;
}