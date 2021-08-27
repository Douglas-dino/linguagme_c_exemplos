#include <stdio.h>

#define LIMITE 50
#define MULTAPKG 4

int main(){
    float peso=0.0, exc=0.0, multa=0.0;

    printf("Digite o peso pescado: ");
    scanf("%f",&peso);

    if (peso > LIMITE){
        exc = peso - LIMITE;
        multa = exc * MULTAPKG;
        printf("Peso excedido, multa de R$ %.2f deve ser paga\n",multa);
    }else{
        printf("Nao houve excesso\n");
    }
    return 0;
}