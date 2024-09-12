#include <stdio.h>
#include <stdlib.h>

int main(){
    int segundos = 0;
    
    printf("Digite o tempo em segundos:");
    scanf("%i", &segundos);
    system("clear");
    
    int minutos  = segundos / 60;
    int horas    = minutos / 60 ;

    printf("O tempo em horas : %d\n", horas);
    printf("O tempo em minutos : %d\n", minutos );
    printf("O tempo em segundos : %d\n", segundos );
    system("pause");
    
    return 0;
}