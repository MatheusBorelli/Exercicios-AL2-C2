#include <stdio.h>
#include <stdlib.h>

int main(){
    float velocidade;
    
    printf("Digite a velocidade do carro: ");
    scanf("%f", &velocidade);
    
    if(velocidade > 80.0) printf("O carro foi multado em R$%.2f\n", (velocidade - 80.0) * 7.0);
    else printf("O carro nao foi multado\n");

    system("pause");
    return 0;
}