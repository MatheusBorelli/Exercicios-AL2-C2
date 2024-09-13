#include <stdio.h>
#include <stdlib.h>

// A extensão do circuito de Interlagos é de 4.309 metros. Ayrton Senna no GP do
// Brasil em 1991 cravou a pole position com 1min16s. Calcule a velocidade média
// que Ayrton Senna fez nesta volta. Apresente o resultado em km/h.

int main(){
    float km = 4309.0/1000.0;
    float tempo_segundos = 76;
    
    printf("A velocidade media do Ayrton Senna em interlagos em 1991: %.2f", km/((tempo_segundos/3600)));

    system("pause");
    return 0;
}