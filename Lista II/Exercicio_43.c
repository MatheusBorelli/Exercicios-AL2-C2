#include <stdio.h>
#include <stdlib.h>

// A jornada de trabalho em uma empresa é de 40hs semanais ou 160hs mensais.

// • O funcionário que trabalhar mais de 160 horas mensais receberá hora extra, cujo
// cálculo é o valor da hora regular com um acréscimo de 50%. O valor da hora
// trabalhada nesta empresa para todos os funcionários é de R$15,62.

// • Faça um programa que leia o nome do funcionário e o número de horas
// trabalhadas por ele em um mês. Mostre o nome e o salário total do funcionário,
// que deverá ser acrescido das horas extras (se houver).

// • Obs: O funcionário que trabalhar menos que 150 horas mensais deve ser demitido.
#define SAL_PER_HORA 15.62

int main(){
    char nome[25];
    int horas;
    float salario = 0.0;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua carga horaria inteira: ");
    scanf("%d", &horas);
    
    if(horas > 160) 
        salario = (160 * SAL_PER_HORA) + ( ( horas - 160 ) * (SAL_PER_HORA * 1.5) );  
    else if(horas >= 150 && horas <= 160) 
        salario = (horas * SAL_PER_HORA);
    else 
        salario = 0;
    
    if(salario == 0)
        printf("%s esta demitido\n", nome);
    else
        printf("Nome: %s - Salario: %.2f - Horas: %d\n", nome , salario , horas );
    
    system("pause");
    return 0;
}