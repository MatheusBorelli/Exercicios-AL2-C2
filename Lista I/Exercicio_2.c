#include <stdio.h>
#include <stdlib.h>

int main(){
    char* email;
    printf("Escreva seu email: ");
    scanf("%s", &email);
    printf("%s", email);
    system("pause");
    return 0;
}