#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Sabendo que a distância entre o Sol e a Terra é de 149.600.000 km e a velocidade
// da luz é de 299.792.458 metros por segundo, calcule quanto o tempo a luz leva
// para percorrer o caminho entre o Sol e a Terra. Apresente o resultado em minutos.

int main(){
    float minutos = (149600000/(299792458*3.6)) * 60 ;
    float segundos =  abs(minutos * 60) % 60;
    printf("O tempo de travessia da luz do Sol a Terra e de: %.0f minutos e %.0f segundos", minutos , segundos);

    system("pause");
    return 0;
}