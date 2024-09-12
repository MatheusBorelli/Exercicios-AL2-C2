#include <stdio.h>
#include <stdlib.h>

int main(){
    char* nome, prontuario;
    float nota_1 = 0;
    float nota_2 = 0;
    float nota_3 = 0;
    float nota_4 = 0;
    float media = 0;

    printf("Digite seu nome:");
    scanf("%s", &nome);
    system("clear");
    
    printf("Digite seu prontuario:");
    scanf("%s", &prontuario);
    system("clear");
        
    printf("Digite sua Renda familiar:");
    scanf("%f", &nota_1);
    system("clear");
    printf("Digite sua Renda familiar:");
    scanf("%f", &nota_2);
    system("clear");
    printf("Digite sua Renda familiar:");
    scanf("%f", &nota_3);
    system("clear");
    printf("Digite sua Renda familiar:");
    scanf("%f", &nota_4);
    system("clear");
    
    media = (nota_1 + nota_2 + nota_3 + nota_4)/4;

    printf("Nome: %s - prontuario: %s - media do aluno : %.2f", nome, prontuario, media );
    system("pause");
    
    return 0;
}