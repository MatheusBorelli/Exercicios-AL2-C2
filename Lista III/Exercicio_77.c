#include <stdio.h>
#include <stdlib.h>

int main(){
    for (int i = 100; i <= 2500; i++){
        if(i % 2 != 0) printf(" %4d\t-", i);
    }
    printf("\n");
    system("pause");
    return 0;
}