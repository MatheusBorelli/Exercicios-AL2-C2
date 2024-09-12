
// Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que
// solicite o numero de dias trabalhados pelo encanador e imprima a quantia líquida
// que devera será paga, sabendo-se que são descontados 5,25% do Imposto Sobre
// Serviços (ISS) da Prefeitura.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int dias = 0;
    
    printf("Digite os dias trabalhados pelo encanador:");
    scanf("%i", &dias);
    system("clear");
    
    float salario = 30 * dias;
    salario = salario - (0.0525 * salario);

    printf("Salario liquido do encanador : %.2f", salario);
    system("pause");
    
    return 0;
}