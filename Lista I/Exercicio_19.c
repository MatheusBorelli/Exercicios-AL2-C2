#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int number;
    printf("Escreva um numero inteiro: ");
    scanf("%i", &number);
    printf("%i\n", number*2);
    printf("%i\n", number*3);
    printf("%.2f\n", pow(number,3));
    printf("%.2f\n", sqrt(number));
    system("pause");
    return 0;
}