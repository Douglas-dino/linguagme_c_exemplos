#include <stdio.h>

#define KELVINVAL 273.15

int main(){
    float tmpCelsius=0, tmpKelvin=0;
    printf("Digite o valor em Celcius: \n");
    scanf("%f",&tmpCelsius);
    tmpKelvin = tmpCelsius + KELVINVAL;
    printf("O valor da temperatura em Kelvin = %.2f\n",tmpKelvin);
    return 0;
}