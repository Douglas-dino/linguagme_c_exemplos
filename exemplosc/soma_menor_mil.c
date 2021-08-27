#include <stdio.h>

int main(){
    int soma =0;

    int i = 0;
    while (i < 1000){
        if ((i%3 == 0) || (i%5 == 0)){
            soma += i; //soma = soma + i
        }
        i++;
    }

    printf("Soma = %d\n",soma);
    return 0;
}