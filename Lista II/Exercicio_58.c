#include <stdio.h>
#include <stdlib.h>

// Use a estrutura switch-case neste exercício
// • Digite um número de 1 a 12, de acordo com os meses do ano.
// • De acordo com o número digitado, mostre a descrição do mês por extenso
// • Se o número digitado estiver fora do limite entre 1 e 12, deve ser exibida uma
// mensagem de erro.


int main(){
    int operacao;

    printf("Digite o codigo de operacao: ");
    scanf("%d", &operacao);
    
    switch (operacao)
    {
        case  1 :
            printf("Janeiro");
            break;
        case  2 :
            printf("Fevereiro");
            break;
        case  3 :
            printf("Marco");
            break;
        case  4 :
            printf("Abril");
            break;
        case  5 :
            printf("Maio");
            break;
        case  6 :
            printf("Junho");
            break;
        case  7 :
            printf("Julho");
            break;
        case  8 :
            printf("Agosto");
            break;
        case  9 :
            printf("Setembro");
            break;
        case 10 :
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Erro mes invalido.");
            break;
    }
    printf("\n");
    system("pause");
    return 0;
}