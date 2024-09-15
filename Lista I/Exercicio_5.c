#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[30], prontuario[10];
    float nota_1 = 0;
    float nota_2 = 0;
    float nota_3 = 0;
    float nota_4 = 0;
    float media = 0;

    printf("Digite seu nome:");
    scanf("%s", nome);
    
    
    printf("Digite seu prontuario:");
    scanf("%s", prontuario);
    
        
    printf("Digite sua primeira nota:");
    scanf("%f", &nota_1);
    
    printf("Digite sua segunda nota:");
    scanf("%f", &nota_2);
    
    printf("Digite sua terceira nota:");
    scanf("%f", &nota_3);
    
    printf("Digite sua quarta nota:");
    scanf("%f", &nota_4);
    
    
    media = (nota_1 + nota_2 + nota_3 + nota_4)/4;

    printf("Nome: %s - prontuario: %s - media do aluno : %.2f\n", nome, prontuario, media );
    system("pause");
    
    return 0;
}