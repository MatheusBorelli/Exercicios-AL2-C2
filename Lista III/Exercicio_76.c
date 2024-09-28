#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0; 
    int b = 0; 
    for (int i = 13; i <= 753; i++){
        a += i;
        b++;
    }
    printf("A media da soma dos numeros entre 13 e 753: %d\n",a/b);
    system("pause");
    return 0;
}