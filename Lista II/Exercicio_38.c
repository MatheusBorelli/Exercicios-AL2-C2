#include <stdio.h>
#include <stdlib.h>

int main(){
    float distancia;
    
    printf("Digite a distancia da viagem em km: ");
    scanf("%f", &distancia);
    
    if(distancia <= 200.0) printf("A viagem custara R$%.2f\n", (distancia) * 0.50);
    else printf("A viagem custara R$%.2f\n", (distancia) * 0.45);

    system("pause");
    return 0;
}