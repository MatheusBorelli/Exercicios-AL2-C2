
// Elabore um algoritmo que calcule e mostre a raiz quadrada de um número inteiro.
// Mostre o novo valor da nota com uma casa decimal.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num = 0;
    
    printf("Digite algum valor:");
    scanf("%i", &num);
    system("clear");
    
    float num_sqrt = sqrt(num);

    printf("Raiz quadrada do valor: %.2f", num_sqrt);
    system("pause");
    
    return 0;
}