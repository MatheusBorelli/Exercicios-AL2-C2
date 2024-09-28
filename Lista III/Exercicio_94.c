#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    do{
        printf("Digite um valor maior que 0: ");
        scanf("%d", &n);
    }while( n <= 0 );

    int aux, fib_0 = 0;
    int fib_1 = 0;
    printf(" %d ", fib_1);
    fib_1++;
    do{
        printf(",");
        printf(" %d ", fib_1);

        aux = fib_0;
        fib_0 = fib_1;
        fib_1 = aux + fib_0;
    }while ( fib_1 < n);
    printf("\n");
    system("pause");
    return 0;
}