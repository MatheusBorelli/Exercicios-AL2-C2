#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    
    do{ 
        printf("Digite o valor X: ");
        scanf("%d", &x);
        printf("Digite o valor Y, sendo Y menor que X: ");
        scanf("%d", &y);
    }while( y >= x );

    int sum  = 0;
    int mult = 1;

    for( int i = y ; i <= x ; i++){
        if(i % 2 == 0) sum  += i;
        if(i % 2 != 0) mult *= i;
    }

    printf("A soma dos numeros pares do intervalo:             %6d\n", sum);
    printf("A multiplicacao dos numeros impares do intervalor: %6d\n", mult);

    system("pause");
    return 0;
}