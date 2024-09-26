#include <stdio.h>
#include <stdlib.h>

// O cálculo do peso ideal foi desenvolvido pela Organização Mundial de Saúde
// (OMS) e é feito utilizando a fórmula do Índice de Massa Corporal:
// • IMC = peso / altura²
// • Faça um algoritmo que solicite o nome, peso e altura de uma pessoa.
// 1. Exiba o nome e a classificação de peso, de acordo com a tabela abaixo.
// 2. Também exiba o peso ideal para esta pessoa: (considere IMC ideal = 22)

int main(){
    float peso, altura;
    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite seu altura: ");
    scanf("%f", &altura);
    const float imc = peso / (altura * altura);  
    
    if(imc <= 18.4)
        printf("%s - Abaixo do Peso - Peso para IMC de 22: %.1fKg",nome , 22*(altura*altura));
    else if(imc > 18.4 && imc <= 24.9) 
        printf("%s - Peso Normal - Peso para IMC de 22: %.1fKg",nome , 22*(altura*altura));
    else if(imc > 24.9 && imc <= 29.9)
        printf("%s - Sobrepeso - Peso para IMC de 22: %.1fKg",nome , 22*(altura*altura));
    else if(imc > 29.9 && imc <= 34.9) 
        printf("%s - Obesidade Grau I - Peso para IMC de 22: %.1fKg",nome , 22*(altura*altura));
    else if(imc > 34.9 && imc <= 39.9) 
        printf("%s - Obesidade Grau II - Peso para IMC de 22: %.1fKg",nome , 22*(altura*altura));
    else 
        printf("%s - Obesidade Grau III - Peso para IMC de 22: %.1fKg",nome , 22*(altura*altura));

    
    printf("\n");
    system("pause");
    return 0;
}