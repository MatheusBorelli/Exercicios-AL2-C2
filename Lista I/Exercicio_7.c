#include <stdio.h>
#include <stdlib.h>

int main(){
    float milhas = 0;
    
    printf("Digite a distancia em milhas:");
    scanf("%f", &milhas);
    system("clear");
    
    milhas = 1.61 * milhas;

    printf("A distancia em kilometros: %.2f", milhas );
    system("pause");
    
    return 0;
}