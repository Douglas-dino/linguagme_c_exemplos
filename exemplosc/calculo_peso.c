#include <stdio.h>

int main(){
    char sexo;
    float altura=0.0, pesoIdeal=0.0;
    printf("Digite seu sexo (M ou F): ");    
    scanf("%c",&sexo);

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    if (sexo == 'M'){
        pesoIdeal = (72.7 * altura) - 58;
    }else if (sexo == 'F'){
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    printf("Seu peso ideal e igual a = %.2f\n",pesoIdeal);
    return 0;
}