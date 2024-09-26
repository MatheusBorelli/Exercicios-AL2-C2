#include <stdio.h>
#include <stdlib.h>

int main(){
    int usuario;
    int senha;
    
    printf("Digite o codigo do usuario: ");
    scanf("%d", &usuario);
    
    if(usuario == 1234){
        printf("Digite a senha do usuario: ");
        scanf("%d", &senha);
        if(!(senha == 9999)) printf("Senha Incorreta\n");
        else printf("Acesso permitido\n"); 
    }
    else printf("Usuario Invalido!\n");

    system("pause");
    return 0;
}