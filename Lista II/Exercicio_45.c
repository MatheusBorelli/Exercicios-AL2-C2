#include <stdio.h>
#include <stdlib.h>

// O imposto de renda é calculado com base no salário bruto que um determinado
// funcionário recebe.
// • A tabela do imposto serve de base de calculo do imposto.
// • Desenvolva um sistema que receba o nome do funcionário, sua matrícula funcional e o
// salário sem descontos (salário bruto).
// • Apresente um relatório com o nome do funcionário, sua matrícula e o salário líquido (já
// com os descontos do imposto de renda.


int main(){
    char nome[25];
    char matricula[25];
    float salario = 0.0;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua matricula funcional: ");
    scanf("%s", &matricula);
    printf("Digite seu salario bruto: ");
    scanf("%f", &salario);

    if(salario <= 1903.98)
        printf("Nome: %s | Matricula: %s | Salario Liq.: %.2f", nome , matricula , salario);
    else if(salario <= 2826.65) 
        printf("Nome: %s | Matricula: %s | Salario Liq.: %.2f", nome , matricula , salario - salario * 0.075);
    else if(salario <= 3751.05) 
        printf("Nome: %s | Matricula: %s | Salario Liq.: %.2f", nome , matricula , salario - salario * 0.15);
    else if(salario <= 4664.68) 
        printf("Nome: %s | Matricula: %s | Salario Liq.: %.2f", nome , matricula , salario - salario * 0.225);
    else  
        printf("Nome: %s | Matricula: %s | Salario Liq.: %.2f", nome , matricula , salario - salario * 0.275);
    printf("\n");
    system("pause");
    
    return 0;
}