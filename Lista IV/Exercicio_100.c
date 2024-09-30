#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(NULL));
	
	int M[7][4] = {0};
	for(int j = 0; j < 7 ; j++)
		for(int i = 0; i < 4 ; i++){
			M[j][i] = rand() % 100;
		}


	int menor = M[0][0];
	int pos_L, pos_C;
	for(int j = 0; j < 7 ; j++)
		for(int i = 0; i < 4 ; i++)
			if( M[j][i] < menor ){
				menor = M[j][i];
				pos_C = i+1;
				pos_L = j+1;
			}
	for(int j = 0; j < 7 ; j++){
		for(int i = 0; i < 4 ; i++){
			printf("%3d ", M[j][i]);
		}
	    printf("\n");	
	}
	printf("O menor valor da matriz: %d\n", menor);
	printf("O menor valor da matriz esta na coluna %d e linha %d\n", pos_C, pos_L);
	
	return 0;
}