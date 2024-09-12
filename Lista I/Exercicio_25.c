#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    printf("O numero antecessor %d do %d e o numero sucessor %d", num-1 , num , num+1 );

    system("pause");
    return 0;
}