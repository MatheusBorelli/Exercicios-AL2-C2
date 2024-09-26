#include <stdio.h>
#include <stdlib.h>

// Escrever um algoritmo que leia 3 valores para A,B e C . Verifique se os valores
// (A,B e C) são iguais entre si, e mostre esta informação. Porém se forem diferentes,
// mostre-os em ordem crescente

int main(){
    float a , b , c;
    
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    
    if(a == b && b == c) printf("os valores de A, B e C sao iguais");
    else if(a > b && a > c){
        if(b > c) printf("A : %.2f - B: %.2f - C: %.2f", a , b , c);
        else printf("A : %.2f - C: %.2f - B: %.2f", a , c , b);
    }
    else if( b > c && b > a){
        if( a > c ) printf("B : %.2f - A: %.2f - C: %.2f", b , a , c);
        else printf("B : %.2f - C: %.2f - A: %.2f", b , c , a);
    }
    else{
        if( b > a ) printf("C : %.2f - B: %.2f - A: %.2f", c , b , a);
        else printf("C : %.2f - A: %.2f - B: %.2f", c , a , b);
    }

    printf("\n");
    system("pause");
    return 0;
}