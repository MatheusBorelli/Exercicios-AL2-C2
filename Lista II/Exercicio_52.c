#include <stdio.h>
#include <stdlib.h>

// Escrever um algoritmo que leia os dados de uma pessoa (nome, sexo, idade,
// altura e saúde) e informe se está apta ou não para cumprir o serviço militar
// obrigatório. Uma pessoa apta deve ser do sexo masculino, ter 18 anos, 1.70 de
// altura e estar em com boa saúde.

int main(){
    char nome[20];
    int sexo , idade , saude;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite seu sexo 1 para masculino, 0 para feminino: ");
    scanf("%d", &sexo);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite 1 caso sua saude estar boa e 0 caso sua saude esteja ruim: ");
    scanf("%d", &saude);

    if( sexo && idade >= 18 && altura >= 1.7 && saude ) 
        printf("%s esta apto para o servico militar", nome);
    else
        printf("%s NAO esta apto para o servico militar", nome);

    printf("\n");
    system("pause");
    return 0;
}