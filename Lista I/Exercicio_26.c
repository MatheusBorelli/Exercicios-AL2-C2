#include <stdio.h>
#include <stdlib.h>

// Black Friday: faça um programa que leia o preço de um produto e calcule o seu
// novo preço, com 35% de desconto. O custo do frete é de 7,5% do valor do produto.
// O valor do Imposto sobre Produtos Industrializados (IPI) é de 18%. Calcule o valor
// total a ser pago por este produto, em reais.

int main(){
    float preco, novo_preco;

    printf("Digite o preco do produto da black friday: ");
    scanf("%f", &preco);
    
    novo_preco = preco * 0.65;
    printf("Custo do produto:  \t%4.2f\n", novo_preco);
    printf("Custo do frete:    \t%4.2f\n", preco * 0.075);
    printf("Custo dos impostos:\t%4.2f\n", preco * 0.18);
    printf("Custo Total:       \t%4.2f\n", novo_preco + preco * 0.075 + preco * 0.18 );

    system("pause");
    return 0;
}