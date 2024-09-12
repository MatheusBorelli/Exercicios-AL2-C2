#include <stdio.h>
#include <stdlib.h>

// Desenvolva um programa que leia as duas notas de um aluno, calcule e mostre a
// sua média. Apresente com uma casa decimal.

int main(){
    float nota1, nota2;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    
    printf("Nota 2: ");
    scanf("%f", &nota2);
    
    printf("A nota arredondada para cima: %.1f", (nota1 + nota2)/2 );

    system("pause");
    return 0;
}