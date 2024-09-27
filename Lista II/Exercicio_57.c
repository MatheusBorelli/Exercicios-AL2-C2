#include <stdio.h>
#include <stdlib.h>

// Uma máquina executa 5 operações, de acordo com os códigos abaixo:
// • 1001 = Ligar, 1002 = Checagem de Funcionamento
// • 1003 = Operação Padrão, 1004 = Resfriamento,
// • 1005 = Desligar
// • De acordo com o número digitado, mostre a operação utilizada.
// • Se o número digitado for diferente dos códigos fornecidos, deve ser exibida uma
// mensagem de erro: “Código inválido.”
// • Use a estrutura switch-case neste exercício


int main(){
    int operacao;

    printf("Digite o codigo de operacao: ");
    scanf("%d", &operacao);
    
    switch (operacao)
    {
    case 1001 :
        printf("Ligando...");
        break;
    case 1002 :
        printf("Checando Funcionamento...");
        break;
    case 1003 :
        printf("Operacao Padrao");
        break;
    case 1004 :
        printf("Resfriando...");
        break;
    case 1005 :
        printf("Desligando...");
        break;
    default:
        printf("Codigo invalido");
        break;
    }
    printf("\n");
    system("pause");
    return 0;
}