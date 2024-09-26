#include <stdio.h>
#include <stdlib.h>

int main(){
    int value;
    printf("Digite um valor inteiro: ");
    scanf("%d", &value);
    if(value == 0)     printf("valor nulo\n");
    else if(value < 0) printf("valor negativo\n");
    else if(value > 0) printf("valor positivo\n");

    system("pause");
    return 0;
}