#include <stdio.h>
#include <stdlib.h>

int main(){
    float value = 0;
    
    for (unsigned i = 0; i < 10; i++)
    {
        float value2 = 0;
        printf("Digite um valor: ");
        scanf("%f", &value2);
        value += value2;
    }

    printf("A media dos valores digitados: %.2f",value/10);
    
    return 0;
}