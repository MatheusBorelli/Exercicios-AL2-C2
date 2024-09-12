#include <stdio.h>
#include <stdlib.h>

int main(){
    float metro = 0;
    
    printf("Digite o tamanho em metros: ");
    scanf("%f", &metro);
    system("clear");
    printf("A medida em decimetros  : %.6f\n", metro * 10 );
    printf("A medida em centimetros : %.6f\n", metro * 100 );
    printf("A medida em milimetros  : %.6f\n", metro * 1000 );
    system("pause");
    
    return 0;
}