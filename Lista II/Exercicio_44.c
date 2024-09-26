#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faça um programa que solicite 2 números quaisquer.
// • Restrição: Se algum dos números digitados for igual a zero, mostre a mensagem
// “Zero é número inválido” e solicite um novo número.
// • Faça operações matemáticas de acordo com o que for escolhido pelo usuário em
// um menu de opções de uma calculadora:
// • Opção 1 – Soma
// • Opção 2 – Subtração
// • Opção 3 – Multiplicação
// • Opção 4 – Divisão
// • Opção 5 – Potenciação
// • Mostre os números digitados pelo usuário
// • A operação matemática realizada
// • O resultado da operação


int main(){
    float numero1=0, numero2=0;
    
    printf("Digite um numero qualquer, exceto zero: ");
    scanf("%f", &numero1);
    if(numero1 == 0){
        printf("Zero e numero invalido: ");
        scanf("%f", &numero1);
    }
    printf("Digite outro numero qualquer, exceto zero: ");
    scanf("%f", &numero2);
    if(numero2 == 0){
        printf("Zero e numero invalido: ");
        scanf("%f", &numero2);
    }
    if(!numero1 || !numero2) {
        printf("Zero e um numero invalido\n");
        system("pause");
        return 0;
    }
    int opcao = 0;
    printf("Opcao 1 - Soma\nOpcao 2 - Subtracao\nOpcao 3 - Multiplicacao\nOpcao 4 - Divisao\nOpcao 5 - Potenciacao\nEscolha alguma das opcoes acima: ");
    scanf("%d",&opcao);
    if(opcao == 1)
        printf("Numero 1: %.2f\nNumero 2: %.2f\nA operacao matematica realiza: x+y\nResultado: %.2f", numero1, numero2 , numero1 + numero2);
    else if(opcao == 2) 
        printf("Numero 1: %.2f\nNumero 2: %.2f\nA operacao matematica realiza: x-y\nResultado: %.2f", numero1, numero2 , numero1 - numero2);
    else if(opcao == 3) 
        printf("Numero 1: %.2f\nNumero 2: %.2f\nA operacao matematica realiza: x*y\nResultado: %.2f", numero1, numero2 , numero1 * numero2);
    else if(opcao == 4) 
        printf("Numero 1: %.2f\nNumero 2: %.2f\nA operacao matematica realiza: x/y\nResultado: %.2f", numero1, numero2 , numero1 / numero2);
    else if(opcao == 5) 
        printf("Numero 1: %.2f\nNumero 2: %.2f\nA operacao matematica realiza: x^y\nResultado: %.2f", numero1, numero2 , pow(numero1 , numero2));
    else
    {
        printf("Nenhuma opcao escolhida\n");
        system("pause");
        return 0;
    }
    printf("\n");
    system("pause");
    return 0;
}