#include <stdio.h>
#include <stdlib.h>

// Um carro possui 5 marchas e a marcha ré.
// • Digite um número de 0 a 5, sendo 0 a marcha ré.
// • De acordo com o número digitado, mostre a marcha utilizada.
// • Se o número digitado estiver fora do limite entre 0 e 5, deve ser exibida uma
// mensagem de erro: “Marcha inválida”
// • Use a estrutura switch-case neste exercício


int main(){
    int marcha;

    printf("Digite a marcha do carro: ");
    scanf("%d", &marcha);
    
    switch (marcha)
    {
    case 0 :
        printf("O carro esta na marcha re");
        break;
    case 1 ... 5 :
        printf("O carro esta na marcha %d", marcha);
        break;
    default:
        printf("Marcha invalida");
        break;
    }
    
    printf("\n");
    system("pause");
    return 0;
}