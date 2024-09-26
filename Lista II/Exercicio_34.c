#include <stdio.h>
#include <stdlib.h>

int main(){
    int language;
    char username[30];
    float result;
    printf("1 - English\n2 - Espanol\n3 - Portugues - BR\n");
    printf("Choose your Language: ");
    scanf("%d", &language);
    system("clear || cls");
    if (language == 1) //English
    {    
        printf("Write your username: ");
        scanf("%s", username);
        printf("Welcome %s\n", username);
    }
    else if (language == 2) //Spanish
    {
        printf("Ingrese su nombre de usuario: ");
        scanf("%s", username);
        printf("Bienvenido(a) %s\n", username);
    }
    else if (language == 3) // Portuguese - BR
    {
        printf("Digite seu nome de usuario: ");
        scanf("%s", username);
        printf("Bem vindo(a) %s\n", username);
    }
    else
    {
        printf("-----Invalid Language-----\n-----Idioma no valido-----\n-----Idioma Invalido -----\n");
    }

    system("pause");
    return 0;
}