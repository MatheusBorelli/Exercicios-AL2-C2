#include <stdio.h>
#include <stdlib.h>

#define MAX_VEC 5

int main(){
    char nome[MAX_VEC][20];
    int sexo[MAX_VEC] , idade[MAX_VEC];
    float altura[MAX_VEC];

    for (unsigned i = 0; i < MAX_VEC; i++)
    {
        printf("Digite seu nome: ");
        scanf("%s", &nome[i]);
        printf("Digite seu sexo 1 para masculino, 0 para feminino: ");
        scanf(" %d", &sexo[i]);
        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);
        printf("Digite sua altura em metros: ");
        scanf("%f", &altura[i]);
    }
    
    int masc=0 , fem=0;
    for(unsigned i = 0; i < MAX_VEC ; i++) sexo[i] == 1 ? masc++ : fem++;

    printf("Quantidade de Homens:   %d\n", masc );
    printf("Quantidade de Mulheres: %d\n", fem );
    printf("Lista de Candidatos Aptos:\n");
    
    for(unsigned i = 0 ; i < MAX_VEC ; i++)
        if( sexo[i] == 1 && idade[i] >= 18 && altura[i] >= 1.7 ) 
            printf("%s\n", nome[i]);
    
    system("pause");
    return 0;
}