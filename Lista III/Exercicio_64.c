#include <stdio.h>
#include <stdlib.h>

int main(){
    float value = 0;
    printf("Digite um valor para ver sua tabuada: ");
    scanf("%f", &value);
    for (unsigned i = 1; i <= 10; i++) 
        printf("%3.2f x %2d = %.2f\n", value , i ,value * (float) i);
    system("pause");
    return 0;
}