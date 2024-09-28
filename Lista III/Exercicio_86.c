#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 1;
    
    while (valor >= 1 || valor <= 20){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        while (valor <= 0 || valor >= 21)
        {
            printf("Entrada Invalida\n");
            printf("Digite um valor: ");
            scanf("%d", &valor);
        }
        printf("%d\n", valor);
    }
    system("pause");
    return 0;
}