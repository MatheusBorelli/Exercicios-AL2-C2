#include <stdio.h>
#include <stdlib.h>

// Leia um número N qualquer e verifique se ele é impar e múltiplo de 3. Mostrar
// somente números que atendam este critério, senão emitir mensagem de erro.

int main(){
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if((numero % 2 != 0) && (numero % 3 == 0))
        printf("O numero: %d atende o criterio de ser impar e multiplo de 3", numero);
    else printf("Erro: Numero nao corresponde aos criterios");
    
    printf("\n");
    system("pause");
    return 0;
}