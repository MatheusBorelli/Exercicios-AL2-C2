#include <stdio.h>
#include <stdlib.h>

// Ler 3 valores (considere que não serão informados valores iguais) e exibir a soma
// dos 2 maiores e a multiplicação dos 2 menores

int main(){
    float a , b , c;
    float soma, multiplicacao;
    
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if (a > b && a > c) {
        if (b > c) {
            soma = a + b;
            multiplicacao = b * c;
        } else {
            soma = a + c;
            multiplicacao = b * c;
        }
    } else if (b > a && b > c) {
        if (a > c) {
            soma = b + a;
            multiplicacao = a * c;
        } else {
            soma = b + c;
            multiplicacao = a * c;
        }
    } else {
        if (a > b) {
            soma = c + a;
            multiplicacao = a * b;
        } else {
            soma = c + b;
            multiplicacao = a * b;
        }
    }

    printf("Soma dos maiores.........: %.2f\n", soma);
    printf("Multiplicacao dos menores: %.2f", multiplicacao);
    
    printf("\n");
    system("pause");
    return 0;
}