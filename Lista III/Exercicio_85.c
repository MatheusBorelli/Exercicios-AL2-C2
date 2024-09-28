#include <stdio.h>
#include <stdlib.h>

int main(){
    int tempo = 0;
    float paisA = 90.0;
    float paisB = 200.0;
    while (paisA <= paisB){
        paisA *= 1.03;
        paisB *= 1.02;
        tempo++;
    }
    printf("O pais A ultrapassara o pais B em %d anos\n", tempo);
    printf("O pais A em %d anos: %.3f milhoes de hab.\n", tempo , paisA);
    printf("O pais B em %d anos: %.3f milhoes de hab.\n", tempo , paisB);
    system("pause");
    return 0;
}