#include <stdio.h>
#include <stdlib.h>

int main(){
    int M[5][6];
    int media = 0 , cont = 0;
    // Gerar matriz de exemplo
    for (unsigned j = 0; j < 5; j++)
        for (unsigned i = 0; i < 6; i++)
            M[j][i] = i+1;
    
    for (unsigned j = 0; j < 5; j++)
        for (unsigned i = 0; i < 6; i++)
            if( M[j][i] % 2 == 0 ){
                media += M[j][i];
                cont++;
            }

    //Matriz
    printf("Matriz: \n");
    for( unsigned j = 0 ; j < 5 ; j++ ){
        for( unsigned i = 0 ; i < 6 ; i++ )
            printf("%d ", M[j][i]);
        printf("\n");
    }
    
    printf("A media dos valores pares da matriz: %d\n", media/cont);

    system("pause");
    return 0;
}