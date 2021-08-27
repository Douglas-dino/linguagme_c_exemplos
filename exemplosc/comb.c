#include <stdio.h>

#define KMPL 12

int main(){
    float tempo = 0.0, velocidade = 0.0, distancia = 0.0, listrosUsados = 0.0;

    printf("Digite o tempo gasto: \n");
    scanf("%f",&tempo);
    printf("Digite velocidade media: \n");
    scanf("%f",&velocidade);

    distancia = tempo * velocidade;
    listrosUsados = distancia / KMPL;

    printf("Foram utilizados %.2f listros \n",listrosUsados);
    return 0;
}