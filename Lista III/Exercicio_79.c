#include <stdio.h>
#include <stdlib.h>

int main(){
    float maior = 0;
    float menor = 0;
    int quant_masc = 0;

    for (unsigned i = 0; i < 4; i++){
        float value = 0;
        int sexo;
        
        printf("Digite sua altura: ");
        scanf("%f", &value);
        
        printf("Digite seu sexo(1 = masc. | 2 = fem.): ");
        scanf("%d", &sexo);

        if(i == 0 || value > maior ) maior = value;
        if(i == 0 || value < menor ) menor = value;
        if(sexo == 1) quant_masc++;
    }
    printf("A pessoa mais alta:   \t%3.2f\n", maior);
    printf("A pessoa mais baixa:  \t%3.2f\n", menor);
    printf("Quantidade de homens: \t%2d\n", quant_masc);
    
    system("pause");
    return 0;
}