#include <stdio.h>
#include <stdlib.h>

#define MAX_VEC 20

int main(){
    int A[MAX_VEC], B[MAX_VEC];
    int C[MAX_VEC], D[MAX_VEC];

    for (unsigned i = 0; i < MAX_VEC; i++)
    {
        system("cls || clear");
        
        printf("Digite o valor de A[%d]: ", i );
        scanf("%d", &A[i]);
        printf("Digite o valor de B[%d]: ", i );
        scanf("%d", &B[i]);
        
        C[i] = A[i] - B[i];
        D[i] = A[i] * B[i];
    }

    printf("O vetor A : {");
    for (unsigned i = 0; i < MAX_VEC; i++){
        if(i != MAX_VEC - 1) printf(";");
        printf(" %d ", A[i]);
    }
    printf("}\n");

    printf("O vetor B : {");
    for (unsigned i = 0; i < MAX_VEC; i++){
        if(i != MAX_VEC - 1) printf(";");
        printf(" %d ", B[i]);
    }
    printf("}\n");

    printf("O vetor C (A - B) : {");
    for (unsigned i = 0; i < MAX_VEC; i++){
        if(i != MAX_VEC - 1) printf(";");
        printf(" %d ", C[i]);
    }
    printf("}\n");

    printf("O vetor D (A * B) : {");
    for (unsigned i = 0; i < MAX_VEC; i++){
        if(i != MAX_VEC - 1) printf(";");
        printf(" %d ", D[i]);
    }
    printf("}\n");
    
    system("pause");
    return 0;
}