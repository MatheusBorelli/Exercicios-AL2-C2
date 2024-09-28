#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned valor = 0;
    for (unsigned i = 0; i <= 1000; i++){
        if(i%2 == 0) valor += i;
    }
    printf("A soma dos numeros pares de 0 a 1000:\t%d\n", valor);
    system("pause");
    return 0;
}
