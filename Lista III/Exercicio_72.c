#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0; 
    for (int i = 0; i <= 1000; i++){
        if(i % 2 == 0) a += i;
    }
    printf("%d\n",a);
    system("pause");
    return 0;
}