#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(NULL));
	
	int N1[4][6] = {0};
	int N2[4][6] = {0};
	int M1[4][6] = {0};
	int M2[4][6] = {0};
	for(int j = 0; j < 4 ; j++)
		for(int i = 0; i < 6 ; i++){
			N1[j][i] = rand() % 100;
		}

	for(int j = 0; j < 4 ; j++)
		for(int i = 0; i < 6 ; i++){
			N2[j][i] = rand() % 100;
		}
	
	for(int j = 0; j < 4 ; j++)
		for(int i = 0; i < 6 ; i++){
			M1[j][i] = N1[j][i] + N2[j][i];
			M2[j][i] = N1[j][i] - N2[j][i];
		}


	printf("\nMatriz N1: \n");
	for(int j = 0; j < 4 ; j++){
		for(int i = 0; i < 6 ; i++){
			printf("%3d ", N1[j][i]);
		}
	    printf("\n");	
	}
	printf("\nMatriz N2: \n");
	for(int j = 0; j < 4 ; j++){
		for(int i = 0; i < 6 ; i++){
			printf("%3d ", N2[j][i]);
		}
	    printf("\n");	
	}


	printf("\nMatriz M1: \n");
	for(int j = 0; j < 4 ; j++){
		for(int i = 0; i < 6 ; i++){
			printf("%3d ", M1[j][i]);
		}
	    printf("\n");	
	}
	printf("\nMatriz M2: \n");
	for(int j = 0; j < 4 ; j++){
		for(int i = 0; i < 6 ; i++){
			printf("%3d ", M2[j][i]);
		}
	    printf("\n");	
	}
	return 0;
}