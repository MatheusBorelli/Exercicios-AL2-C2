// Elabore um algoritmo que leia dois números reais.
// • Imprima a soma, subtração, multiplicação entre estes números. Calcule também a
// divisão por 10 e a potencia cubica destes dois números. Apresente os números
// com 2 casas decimais.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num1 = 0;
    float num2 = 0;
    
    printf("Digite o primeiro valor:");
    scanf("%f", &num1);
    system("clear");
    
    printf("Digite o segundo valor:");
    scanf("%f", &num2);
    system("clear");
    
    printf("soma: %.2f\n", num1 + num2);
    printf("subtracao: %.2f\n", num1 - num2);
    printf("multiplicacao: %.2f\n", num1 * num2);
    printf("divisao por 10 do primeiro valor: %.2f\n", num1 / 10);
    printf("divisao por 10 do segundo valor:  %.2f\n", num2 / 10);
    printf("Potencia cubica do primeiro valor: %.2f\n", pow(num1, 3));
    printf("Potencia cubica do segundo valor: %.2f\n", pow(num2, 3));
    system("pause");
    
    return 0;
}