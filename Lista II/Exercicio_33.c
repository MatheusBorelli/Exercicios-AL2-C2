#include <stdio.h>
#include <stdlib.h>

int main(){
    int value;
    float result;
    printf("Digite a quantidade de macas inteiras compradas: ");
    scanf("%d", &value);
    
    if(value < 12)       result = (float) 1.3 * value ;
    else if(value >= 12) result = (float) 1.0 * value ;
    
    printf("O custo das %d macas e de: %.2f\n", value , result);
    system("pause");
    return 0;
}