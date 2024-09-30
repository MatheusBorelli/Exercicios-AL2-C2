#include <stdio.h>
#include <stdlib.h>

int main(){
    int M[6][6];
    int hachuras[8] = {0};

    // Gerar matriz de exemplo
    for (unsigned j = 0; j < 6; j++)
        for (unsigned i = 0; i < 6; i++)
            M[j][i] = i+1;
    

    // Hachura 1
    for( unsigned j = 0 ; j < 5 ; j++ )
        for( unsigned i = 1+j ; i < 6 ; i++ )
            hachuras[0] += M[j][i];


    // Hachura 2
    for( unsigned j = 0 ; j < 5 ; j++ )
        for( unsigned i = 0 ; i < 5 - j ; i++ )
            hachuras[1] += M[j][i];


    // Hachura 3
    // Superior
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[2] += M[j][i];


    // Hachura 4
    // Esquerdo
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[3] += M[i][j];
    
    
    // Hachura 5
    // Esquerdo
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[4] += M[i][j];
    // Direito
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[4] += M[i][5-j];


    // Hachura 6
    // Superior
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[5] += M[j][i];
    // Inferior
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[5] += M[5-j][i];


    // Hachura 7
    // Superior
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[6] += M[j][i];
    // Esquerdo
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[6] += M[i][j];


    // Hachura 8
    // Esquerdo
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[7] += M[i][j];

    // Inferior
    for( unsigned j = 0 ; j < 2 ; j++ )
        for( unsigned i = 1 + j ; i < 5 - j ; i++ )
            hachuras[7] += M[5-j][i];

    //Matriz
    printf("Matriz M: \n");
    for( unsigned j = 0 ; j < 6 ; j++ ){
        for( unsigned i = 0 ; i < 6 ; i++ )
            printf("%d ", M[j][i]);
        printf("\n");
    }

    for (int i = 0; i < 8; i++)
        printf("hachura %d: %d \n", i , hachuras[i]);

    system("pause");
    return 0;
}