#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano;
    int idade; 
    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &idade);
    
    if (ano - idade >= 16) printf("Voce podera votar esse ano\n");
    else printf("Voce nao votara esse ano\n");

    system("pause");
    return 0;
}