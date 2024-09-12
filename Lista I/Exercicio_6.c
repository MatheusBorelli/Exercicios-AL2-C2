#include <stdio.h>
#include <stdlib.h>

int main(){
    float p_produto = 0;
    
    printf("Digite o valor do produto:");
    scanf("%f", &p_produto);
    system("clear");
    
    p_produto = p_produto - (0.075 * p_produto);

    printf("Novo valor do produto : %.2f", p_produto );
    system("pause");
    
    return 0;
}