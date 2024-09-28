#include <stdio.h>
#include <stdlib.h>

int main(){
    int N1, N2;
    
    printf("Digite o valor de N1: ");
    scanf("%d", &N1);
    printf("Digite o valor de N2: ");
    scanf("%d", &N2);

    while (N1 <= N2)
    {
        if(N1 % 2 != 0) printf(" %2d -",N1);
        N1++;
    }
    printf("\n");
    system("pause");
    return 0;
}