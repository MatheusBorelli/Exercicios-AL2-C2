#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Use a estrutura switch-case neste exercício
// • Elabore um algoritmo que leia a nota do ENEM obtida por um estudante e
// verifique se o mesmo foi aprovado no vestibular da USP.
// • Se o aluno foi aprovado, mostre quais cursos ele está apto a cursar:
// • Gestão Ambiental (643) 
//   Turismo (651)
// • Geologia (658) 
//   Educação Física (744)
// • Jornalismo (796)
//   Engenharia Civil (801)
// • Relações Internacionais (809)
// • Engenharia Mecânica (812)
//   Física (826)
// • Engenharia da Computação (849)
// • Apresentar mensagem “Reprovado na USP” quando nota for menor que
// 643, que é a nota de corte do ENEM para a USP.



int main(){
    float nota;

    printf("Digite sua nota do enem: ");
    scanf("%f", &nota);
    nota = ceil(nota);

    switch ((int) nota)
    {
        case 643 ... 1000:
            printf("O aluno foi aprovado nos seguintes cursos da USP:\n");
            switch ((int) nota)
            {
                case  849 ... 1000:
                    printf("Engenharia da Computacao\n");
                case  826 ... 848:
                    printf("Fisica\n");
                case  812 ... 825:
                    printf("Engenharia Mecanica\n");
                case  809 ... 811:
                    printf("Relacoes Internacionais\n");
                case  801 ... 808:
                    printf("Engenharia Civil\n");
                case  796 ... 800:
                    printf("Jornalismo\n");
                case  744 ... 795:
                    printf("Educacao Fisica\n");
                case  658 ... 743:
                    printf("Geologia\n");
                case  651 ... 657:
                    printf("Turismo\n");
                case  643 ... 650:
                    printf("Gestao Ambiental\n");
                    break;
                default:
                    printf("Reprovado na USP.\n");
                    break;
            }
            break;
        
        default:
            printf("Reprovado na USP");
            break;
    }    
    printf("\n");
    system("pause");
    return 0;
}