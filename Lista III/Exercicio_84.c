#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char novoCalc = 'S';
    float raio = 1;

    while (novoCalc == 'S' || novoCalc == 's')
    {
        system("cls");
        printf("Digite o raio da esfera: ");
        scanf("%f", &raio);
        while(raio <= 0)
        {
            printf("Valor Invalido!!!\n");
            printf("Digite um valor valido para o raio: ");
            scanf("%f", &raio);
        }
        printf("O valor da esfera de raio %3.2f: %.2f\n", raio , (4.0/3.0) * M_PI * pow(raio, 3));
        printf("Realizar Novo Calculo(S/N): ");
        fflush(stdin);
        scanf("%c", &novoCalc);
    }
    system("pause");
    return 0;
}