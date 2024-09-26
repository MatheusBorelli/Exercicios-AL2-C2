#include <stdio.h>
#include <stdlib.h>

// Dado a velocidade medida de um carro que passa por um radar móvel na rodovia,
// determine o tipo de multa:
// • Abaixo de 110km/h (sem multa), de 111km/h até 125km/h (multa leve), de 126km/h
// até 140km/h (multa grave) e acima de 140km/h (multa gravíssima)

int main(){
    float vel;
    
    printf("Velocidade do carro medida: ");
    scanf("%f", &vel);

    if(vel <= 110) printf("O motorista do carro nao tera multa");
    else if(vel <= 125) printf("O motorista do carro tera uma multa leve");
    else if(vel <= 140) printf("O motorista do carro tera uma multa grave");
    else printf("O motorista do carro tera uma multa gravissima");

    printf("\n");
    system("pause");
    return 0;
}