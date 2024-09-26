#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[25];
    float salario;
    float salarioNovo;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    if(salario > 1250.0) salarioNovo = salario + salario * 0.10;
    else salarioNovo = salario + salario * 0.15;

    printf("Nome: %s - Salario: %.2f - Salario c/ Aumento: %.2f\n", nome , salario , salarioNovo);

    system("pause");
    return 0;
}