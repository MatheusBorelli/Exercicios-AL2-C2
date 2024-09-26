#include <stdio.h>
#include <stdlib.h>

// Elabore um algoritmo que, dada a idade de um nadador. Classifique-o em uma das
// seguintes categorias:
// • Infantil A = 5 - 7 anos
// • Infantil B = 8 - 10 anos
// • juvenil A = 11- 13 anos
// • juvenil B = 14 - 17 anos
// • Sênior = 18 - 25 anos
// • Apresentar mensagem “idade fora da faixa etária” quando for outro ano não
// contemplado.

int main(){
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7)        printf("Categoria do nadador Infantil A");
    else if(idade >= 8 && idade <= 10)  printf("Categoria do nadador Infantil B");
    else if(idade >= 11 && idade <= 13) printf("Categoria do nadador Juvenil A");
    else if(idade >= 14 && idade <= 17) printf("Categoria do nadador Juvenil B");
    else if(idade >= 18 && idade <= 25) printf("Categoria do nadador Senior");
    else printf("Idade fora da faixa etaria");

    printf("\n");
    system("pause");
    return 0;
}