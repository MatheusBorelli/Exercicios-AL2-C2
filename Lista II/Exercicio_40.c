#include <stdio.h>
#include <stdlib.h>

int main(){
    float kg_morango, kg_maca;
    
    printf("Digite a quantidade em kg de morango: ");
    scanf("%f", &kg_morango);
    printf("Digite a quantidade em kg de macas: ");
    scanf("%f", &kg_maca);
    float total = 0;
    
    if( kg_morango <= 5 ) total += kg_morango * 2.5;
    else total += kg_morango * 2.20;
    
    if( kg_maca <= 5 ) total += kg_maca * 1.8;
    else total += kg_maca * 1.5;
    
    printf("O total a ser pago: R$%.2f\n", total);

    system("pause");
    return 0;
}