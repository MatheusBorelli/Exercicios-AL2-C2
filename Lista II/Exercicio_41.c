#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    if ((numero % 2 != 0) && (numero % 5 == 0)) printf("%d\n", numero);
    else printf("Numero invalido\n");

    system("pause");
    return 0;
}