#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char novoCalc = 'S';
    float num1 = 1;
    float num2 = 1;

    while (novoCalc == 'S' || novoCalc == 's')
    {
        system("cls");
        printf("Digite o numero 1: ");
        scanf("%f", &num1);
        printf("Digite o numero 2: ");
        scanf("%f", &num2);
        
        printf("A soma dos valores %.2f e %.2f = %.2f\n", num1 , num2 , num1 + num2);
        
        printf("Realizar Novo Calculo(S/N): ");
        fflush(stdin);
        scanf("%c", &novoCalc);
    }
    system("pause");
    return 0;
}