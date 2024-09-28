#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont = 0;
    
    for (unsigned i = 0; i < 10; i++)
    {
        float value = 0;
        printf("Digite um valor: ");
        scanf("%f", &value);
        if(value < 0) cont++;
    }

    printf("A quantidade de valores negativos digitados: %d",cont);
    
    return 0;
}