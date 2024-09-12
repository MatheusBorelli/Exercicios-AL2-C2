#include <stdio.h>
#include <stdlib.h>

int main(){
    char* nome;
    printf("Escreva seu nome: ");
    scanf("%s", &nome);
    printf("Bem vindo %s", nome);
    system("pause");
    return 0;
}