#include <stdio.h>
#include <stdbool.h>

int main(){
    int desejado = 0, primoAtual = 2;
    _Bool ePrimo;
    printf("Ate qual primo gerar? ");
    scanf("%d",&desejado);

    while (primoAtual < desejado){
        ePrimo = true;
        for (int i = 2;i < primoAtual - 1;i++){
            int resto = primoAtual % i;
            if (resto == 0){
                ePrimo = false;
            }
        }
        if (ePrimo){
            printf("%d \n",primoAtual);
        }
        primoAtual += 1;
    }
    return 0;
}