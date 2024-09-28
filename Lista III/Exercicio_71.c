#include <stdio.h>
#include <stdlib.h>

int main(){
    for (int i = 0; i <= 1500; i++){
        if(i % 11 == 0) printf(" %4d\t-", i);
    }
    printf("\n");
    system("pause");
    return 0;
}