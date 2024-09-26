#include <stdio.h>
#include <stdlib.h>

int main(){
    int value, value2;
    printf("Digite um valor inteiro: ");
    scanf("%d", &value);
    printf("Digite um valor inteiro diferente do anterior: ");
    scanf("%d", &value2);
    if(value < value2) printf("o maior valor eh: %d\nA ordem deles: %d - %d\n",value2,value2,value);
    else if(value > value2) printf("o maior valor eh: %d\nA ordem deles: %d - %d\n",value,value,value2);

    system("pause");
    return 0;
}