#include <stdio.h>
#include <stdlib.h>

int main(){
    char* nome, sobrenome, email, m_RG, m_CPF;
    float rendaFamiliar = 0;

    printf("Digite seu nome:")
    scanf("%s", &nome);
    system("clear");
    
    printf("Digite seu sobrenome:")
    scanf("%s", &sobrenome);
    system("clear");
    
    printf("Digite seu email:")
    scanf("%s", &email);
    system("clear");
    
    printf("Digite seu RG:")
    scanf("%s", &m_RG);
    system("clear");
    
    printf("Digite seu CPF:")
    scanf("%s", &m_CPF);
    system("clear");
    
    printf("Digite sua Renda familiar:")
    scanf("%f", &rendaFamiliar);
    system("clear");
    
    printf("Nome: %s %s - email: %s - RG: %s - CPF: %s - Renda Familiar: %.2f", nome, sobrenome, email, m_RG, m_CPF, rendaFamiliar );
    system("pause");
    
    return 0;
}