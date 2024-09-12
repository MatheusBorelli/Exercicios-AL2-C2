// Dado um ângulo qualquer, determine o seno, cosseno e tangente deste ângulo.
// Mostre o resultado com quatro casas decimais.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float ang = 0;
    
    printf("Digite o primeiro valor:");
    scanf("%f", &ang);
    system("clear");
    
    ang = (ang * M_PI )/ 180.0; 
    
    printf("seno: %.4f\n", sin(ang));
    printf("cosseno: %.4f\n", cos(ang));
    printf("tangente: %.4f\n", tan(ang));
    system("pause");
    
    return 0;
}