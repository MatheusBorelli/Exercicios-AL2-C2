#include <stdio.h>
#include <stdlib.h>

// Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a
// cada um deles anunciando um bônus especial.
// Escreva um algoritmo que leia o valor das suas compras no ano passado e calcule
// um bônus de 10% se o valor das compras for menor que 500.000 e de 15 %, caso
// contrário.

int main(){
   for (int i = 0; i < 150; i++){
        float valorCompra;
        printf("Digite o valor total de suas compras do ano passado: ");
        scanf("%f", &valorCompra);
        // Creio que seja isso 😛
        if(valorCompra < 500000.0 )
            printf("Parabens voce recebeu um bonus de 10%%\n");
        else if(valorCompra >= 500000.0 ) 
            printf("Parabens voce recebeu um bonus de 15%%\n");
    }
    system("pause");
    return 0;
}