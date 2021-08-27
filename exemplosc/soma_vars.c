#include <stdio.h>

int main(){
    float n1,n2,resultado;
    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o segundo numero: ");
    scanf("%f",&n2);
    resultado = n1 + n2;
    printf("O resultado e %f\n",resultado);
    return 0;
}