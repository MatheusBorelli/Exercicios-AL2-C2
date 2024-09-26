#include <stdio.h>
#include <stdlib.h>

int main(){
    char time1[30];
    char time2[30];
    int gols_time_1;
    int gols_time_2;
    printf("Nome do time 1: ");
    scanf("%s", time1);
    printf("Nome do time 2: ");
    scanf("%s", time2);
    system("clear || cls");
    
    printf("Gols do %s: ", time1);
    scanf("%d", &gols_time_1);
    printf("Gols do %s: ", time2);
    scanf("%d", &gols_time_2);
    
    if      (gols_time_1 > gols_time_2)  printf("O time vencedor eh %s\n",time1);
    else if (gols_time_1 < gols_time_2)  printf("O time vencedor eh %s\n",time2);
    else if (gols_time_1 == gols_time_2) printf("EMPATE!!! Nao houve times vencedores\n");
    
    system("pause");
    return 0;
}