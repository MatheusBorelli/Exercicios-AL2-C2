#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define Q_AlUNOS 20

int main(){
	srand(time(NULL));
	
	char alunos[Q_AlUNOS][20];
	float notas[Q_AlUNOS][4];

	for (int j = 0; j < Q_AlUNOS; j++)
	{
		printf("Digite o nome do aluno: ");
		scanf("%s", &alunos[j]);
		for (int i = 0; i < 4; i++)
		{
			printf("Digite a nota do %d bimestre do aluno %s: ", i + 1 , alunos[j]);
			scanf("%f", &notas[j][i]);
		}
	}
	system("cls || clear");
	printf("%*s%*s | %*s | %*s | %*s | %*s | %*s | %-9s |\n", 13,"Aluno",7,"", \
															  6,"Nota 1", \
															  6,"Nota 2", \
															  6,"Nota 1", \
															  6,"Nota 1", \
															  5,"Media" , \
															  "Resultado");
	
	for (int i = 0; i < Q_AlUNOS; i++)
	{
		float media = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3])/4;
		printf("%-20s | %6.2f | %6.2f | %6.2f | %6.2f | %5.2f | %-9s |\n", alunos[i], notas[i][0], notas[i][1], notas[i][2], notas[i][3], media , media >= 6 ? "Aprovado" : "Reprovado" );
	}
	
	printf("\n");
	system("pause");
	return 0;
}
