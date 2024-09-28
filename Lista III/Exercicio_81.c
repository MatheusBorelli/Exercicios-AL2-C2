#include <stdio.h>
#include <stdlib.h>

int main(){
    int N1 = 1;
 
    while (N1 != 0)
    {
        printf("Digite um valor positivo ou 0 para encerrar: ");
        scanf("%d", &N1); 
        while(N1 < 0)
        {
            printf("Digite um valor positivo ou 0 para encerrar: ");
            scanf("%d", &N1);    
        }
        
        for( unsigned i = 0 ; i <= N1 ; i++ ) if(i % 11 == 5) printf(" %3d -", i );
        printf("\n");
    }
    system("pause");
    return 0;
}