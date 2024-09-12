#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Dado uma nota qualquer, com duas casas decimais, arredonde para cima
// Mostre o novo valor da nota com uma casa decimal.

int main(){
    float nota;

    printf("Nota qualquer de duas casas decimais: ");
    scanf("%f", &nota);
    
    printf("A nota arredondada para cima: %.1f", ceil(nota) );

    return 0;
}