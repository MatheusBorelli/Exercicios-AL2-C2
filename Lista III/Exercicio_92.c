#include <stdio.h>
#include <stdlib.h>

int main(){
    float media_sal = 0;
    float menor_sal = 0;
    int media_filhos = 0;

    float salario = 0;
    int filhos = 0;
    int quant = 0;
    do{
        system("cls");

        media_filhos += filhos;
        media_sal += salario; 

        if(quant == 1 || salario < menor_sal ) menor_sal = salario;
        
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &filhos);
        printf("Digite o valor de seu salario: ");
        scanf("%f", &salario);
        if(salario >= 0) quant++;
    }while( salario >= 0 );

    printf("A media de salario da populacao:\t%5.2f\n", media_sal/(quant) );
    printf("A media de filhos:              \t%5.2f\n", (float) media_filhos/quant );
    printf("O menor salario dos hab.:       \t%5.2f\n", menor_sal );

    system("pause");
    return 0;
}