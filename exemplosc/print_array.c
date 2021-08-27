#include <stdio.h>

int main(){
    int numeros[10];

    for (int i = 0; i < 10; i++){
        numeros[i] = i + 1;
    }
    for (int i = 0; i < 10; i++){
        printf("%d ",numeros[i]);
    }
    printf("\n");
    return 0;
}