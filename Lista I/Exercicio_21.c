#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float cateto_adj, cateto_op;

    printf("Cateto Adjacente: ");
    scanf("%f", &cateto_adj);
    printf("Cateto Oposto: ");
    scanf("%f", &cateto_op);

    printf("A hipotenusa do triangulo: %.2f", sqrt((pow(cateto_adj, 2)) + (pow(cateto_op,2))) );

    return 0;
}