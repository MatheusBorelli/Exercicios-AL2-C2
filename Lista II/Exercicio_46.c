#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que receba um número e mostre uma mensagem caso este
// número seja maior que 120, menor que 60 ou igual a 80. Exibir resultado


int main(){
    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    if(numero > 120) printf("O numero e maior que 120");
    if(numero < 60)  printf("O numero e menor que 60");
    if(numero == 80) printf("O numero e igual a 80");
    printf("\n");
    system("pause");
    return 0;
}