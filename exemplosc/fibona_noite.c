#include <stdio.h>

int main(){
    int at = 1, an = 1, pr = 2, soma = 2, resto = 0;
    printf("%07d %07d %07d ",at,an,pr);
    while (pr < 4000000){
        resto = pr % 2;
        if (resto != 0){
            soma = soma + pr; //soma += pr;
        }
        an = at;
        at = pr;
        pr = an + at;
        printf("%07d ",pr);
    }
    printf("\n");
    printf("Valor total da soma = %d\n",soma);
    return 0;
}