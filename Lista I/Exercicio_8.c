#include <stdio.h>
#include <stdlib.h>

int main(){
    float polegadas = 0;
    
    printf("Digite o comprimento em polegadas:");
    scanf("%f", &polegadas);
    system("clear");
    
   polegadas = 2.54 *polegadas;

    printf("A distancia em kilometros: %.2f",polegadas );
    system("pause");
    
    return 0;
}