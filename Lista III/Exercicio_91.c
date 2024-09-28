#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[30];
    float sal_min , sal_anos = 0;
    int anos;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite o valor do salario minimo atual: ");
    scanf("%f", &sal_min);

    do{
        sal_anos += sal_min * 12.0;
        anos++;
    }while( sal_anos <= 1000000 );

    printf("Levara %3d para %s ficar milionario com R$%.2f poupados com salario minimo atual(%.2f)\n", anos , nome , sal_anos , sal_min);

    system("pause");
    return 0;
}