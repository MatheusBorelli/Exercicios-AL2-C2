#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned aprov  = 0;
    unsigned recup  = 0;
    unsigned reprov = 0;

    for (int i = 0; i < 40; i++){
        float notaFinal;
        printf("Digite a nota final do aluno: ");
        scanf("%f", &notaFinal);
        if(notaFinal >= 7.0) aprov++;
        if(notaFinal >= 5.0 && notaFinal < 7.0) recup++;
        if(notaFinal < 5.0) reprov++;
    }
    printf("Quantidade de alunos aprovados:      %2d\n", aprov);
    printf("Quantidade de alunos reprovados:     %2d\n", reprov);
    printf("Quantidade de alunos em recuperacao: %2d\n", recup);
    system("pause");
    return 0;
}