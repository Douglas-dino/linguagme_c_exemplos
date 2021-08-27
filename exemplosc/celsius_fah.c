#include <stdio.h>



int main(){
    float tempCelsius = 0.0, tempFahrenheit = 0.0; //Cria variavel
    printf("Digite a temperatura em Celsius: \n"); //Exibe Mensagem
    scanf("%f",&tempCelsius); //Le valor para tempCelsius
    tempFahrenheit = (9 * tempCelsius + 160) / 5.0; //Converte o valor
    printf("A temperatura em Fahrenheit = %.2f\n",tempFahrenheit); //Exibe o valor
    return 0;
}