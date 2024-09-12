// Dado uma nota qualquer, com duas casas decimais, arredonde para cima e mostre
// o novo valor da nota arredondada.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float nota = 0;
    
    printf("Digite o primeiro valor:");
    scanf("%f", &nota);
    system("clear");
    
    printf("nota arredondada : %.2f\n", ceil(nota));
    system("pause");
    
    return 0;
}