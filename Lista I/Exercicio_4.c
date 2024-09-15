#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[30], matricula[10];
    float salarioBruto = 0;

    printf("Digite seu nome:");
    scanf("%s", nome);
    system("clear");
    
    printf("Digite seu sobrenome:");
    scanf("%s", matricula);
    system("clear");
    
    printf("Digite sua Renda familiar:");
    scanf("%f", &salarioBruto);
    system("clear");
    
    salarioBruto =  salarioBruto - (0.27 * salarioBruto);

    printf("Nome: %s - matricula: %s - salario liquido: %.2f", nome, matricula, salarioBruto );
    system("pause");
    
    return 0;
}