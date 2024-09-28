#include <stdio.h>
#include <stdlib.h>

int main(){
    for (int i = 1000; i <= 1999; i++){
        if(i % 11 == 5) printf(" %4d\t-", i);
    }
    printf("\n");
    system("pause");
    return 0;
}