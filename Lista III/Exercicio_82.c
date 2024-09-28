#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso = 1;
    int idade = 1;
    float mediaPeso = 0;
    int i = 0;

    while (peso != 0)
    {
        printf("Digite o peso da pessoa: ");
        scanf("%f", &peso); 
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade); 
        while(peso < 0 || idade < 0)
        {
            printf("Valores Invalidos!!!\n");
            printf("Digite o peso da pessoa: ");
            scanf("%f", &peso);
            printf("Digite a idade da pessoa: ");
            scanf("%d", &idade);
        }
        if(idade > 30){
            mediaPeso += peso;
            i++;
        }
    }
    printf("A media de peso das pessoas com mais de 30 anos: %3.2f\n", mediaPeso);
    system("pause");
    return 0;
}