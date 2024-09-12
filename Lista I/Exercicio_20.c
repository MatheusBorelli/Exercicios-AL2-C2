#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que pergunte a quantidade de Km percorridos por um carro
// alugado e a quantidade de dias pelos quais ele foi alugado.
// • Calcule o preço a pagar, sabendo que o carro custa R$ 60 por dia e R$ 0,15 por
// Km rodado.

int main(){
    float km_rodados;
    int dias_usados;
    printf("Digite a kilometragem rodada pelo carro alugado: ");
    scanf("%f", &km_rodados);
    printf("Digite a quantidade de dias usados pelo carro alugado: ");
    scanf("%i", &dias_usados);
    
    printf("O preço a ser pago pelo carro alugado e de: %.2f\n", (60*dias_usados) + (0.15 * km_rodados));

    system("pause");
    return 0;
}