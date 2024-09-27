#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Use a estrutura switch-case neste exercício
// • Elabore um algoritmo que dado o peso de um lutador de boxe classifique-o
// em uma das seguintes categorias:
// • mosca-ligeiro (até 49kg)
// • mosca (até 52kg)
// • galo (até 56kg)
// • leve (até 60kg)
// • médio-ligeiro (até 64kg)
// • meio-médio (até 69kg)
// • médio (até 75kg)
// • meio-pesado (até 81kg)
// • pesado (até 91kg)
// • superpesado (acima de 91kg até 130kg).
// • Apresentar mensagem “peso fora da faixa” quando peso for maior que
// 130kg.



int main(){
    float peso;

    printf("Digite o peso do lutador: ");
    scanf("%f", &peso);
    peso = ceil(peso);
    switch ((int) peso)
    {
        case  47 ... 49 :
            printf("O Lutador esta na categoria mosca-ligeiro");
            break;
        case  50 ... 52:
            printf("O Lutador esta na categoria mosca");
            break;
        case  53 ... 56 :
            printf("O Lutador esta na categoria galo");
            break;
        case  57 ... 60 :
            printf("O Lutador esta na categoria leve");
            break;
        case  61 ... 64 :
            printf("O Lutador esta na categoria medio-ligeiro");
            break;
        case  65 ... 69 :
            printf("O Lutador esta na categoria medio-medio");
            break;
        case  70 ... 75 :
            printf("O Lutador esta na categoria medio");
            break;
        case  76 ... 81 :
            printf("O Lutador esta na categoria meio-pesado");
            break;
        case  82 ... 91 :
            printf("O Lutador esta na categoria pesado");
            break;
        case  92 ... 130 :
            printf("O Lutador esta na categoria superpesado");
            break;
        default:
            printf("Peso fora da faixa.");
            break;
    }
    printf("\n");
    system("pause");
    return 0;
}