#include <stdio.h>

int main(){
    int prox=0,ant=1,atual=1,soma=2;
    while (prox <= 4000000){
        prox = ant + atual;
        printf("%07d ",prox);
        int resto = prox % 2;
        if (resto != 0){
            soma += prox; //soma = soma + prox
        }
        ant = atual;
        atual = prox;        
    }
    printf("\n");
    printf("Valor da soma = %d\n",soma);
    return 0;
}