#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor1 = 1;
    float valor2 = 1;
    
    printf("Digite um valor: ");
    scanf("%f", &valor1); 
    printf("Digite um segundo valor: ");
    scanf("%f", &valor2); 

    while(valor2 == 0)
    {
        printf("Valor invalido!!!\n");
        printf("Digite um valor diferente de 0: ");
        scanf("%f", &valor2);
    }
    printf("A divisao dos valores %3.2f e %3.2f : %3.2f\n", valor1 , valor2 , valor1/valor2);
    system("pause");
    return 0;
}