#include <stdio.h>

int main(){
    int tabuada = 0, resultado = 0;
    printf("Digite a tabuada desejada: ");
    scanf("%d",&tabuada);
    for(int cont = 1;cont <= 10; cont++){
        resultado = cont * tabuada;
        printf("%d X %d = %d\n",tabuada,cont,resultado);
    }
    return 0;
}