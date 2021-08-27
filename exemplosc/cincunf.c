#include <stdio.h>

#define PI 3.1415

int main(){
    float raio=0.0, circ=0.0;
    printf("Digite o raio: \n");
    scanf("%f",&raio);
    circ=PI*raio*raio;
    printf("Raio = %.2f\n",circ);
    return 0;
}