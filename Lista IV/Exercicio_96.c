#include <stdio.h>
#include <stdlib.h>

#define MAX_VEC 20

int main(){
    float alunos[MAX_VEC] , media = 0;

    for (unsigned i = 0; i < MAX_VEC; i++)
    {
        system("cls || clear");
        
        printf("Digite a nota do Aluno %2d: ", i+1 );
        scanf("%f", &alunos[i]);

        media += alunos[i];
    }

    system("cls || clear");

    for (unsigned i = 0; i < MAX_VEC; i++)
        printf("Nota do Aluno %2d : %2.2f\n", i+1 , alunos[i]);
    
    printf("A media desse grupo de alunos: %2.2f\n", (float) media/MAX_VEC);
    
    system("pause");
    return 0;
}