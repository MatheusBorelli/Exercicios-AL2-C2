#include <stdio.h>
#include <stdlib.h>

int main(){
    char codigo[30];
    char codigo_MC[30];
    float value;
    float maior = 0;
    float media = 0;

    for (unsigned i = 0; i < 15; i++){
        printf("Digite o codigo do produto: ");
        scanf("%s", &codigo);        
        printf("Digite o valor: ");
        scanf("%f", &value);

        if( i == 0 || value > maior ){
            maior = value;
            for(unsigned i = 0; i < 30 ; i++) codigo_MC[i] = codigo[i]; // N sei se era necessario, mas ta ai :)
        }
        
        media += value;
    }
    printf("O produto mais caro: \t%s - %3.2f\n", codigo_MC , maior);
    printf("A media dos produtos:\t%3.2f\n", media/15);
    
    system("pause");
    return 0;
}