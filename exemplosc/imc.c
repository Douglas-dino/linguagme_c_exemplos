#include <stdio.h>

int main(){
    float peso=0.0, altura=0.0;

    printf("Digite o peso: ");
    scanf("%f",&peso);
    printf("Digite a altura: ");
    scanf("%f",&altura);

    float imc=0.0;
    imc = peso / (altura * altura);
    printf("IMC = %.2f \nVocê é: ",imc);
    if (imc < 18){
        printf("Abaixo do peso\n");
    }else if ((imc >= 18) && (imc < 25)){
        printf("Normal\n");
    }else if((imc >= 25) && (imc < 30)){
        printf("Acima do peso\n");
    }else if(imc >= 30){
        printf("Obeso\n");
    }
    return 0;
}