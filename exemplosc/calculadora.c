#include <stdio.h>

int main(){
    float numero1=0.0,numero2=0.0,resultado=0.0;
    char operacao,parar='N';

    while(parar == 'N'){
        printf("Digite a operacao (Digite entre +,-,/,*): ");
        scanf(" %c",&operacao);

        printf("Digite o primeiro numero: ");
        scanf("%f",&numero1);
        printf("Digite o segundo numero: ");
        scanf("%f",&numero2);

        if (operacao == '+'){
            resultado = numero1 + numero2;
        } else if (operacao == '-'){
            resultado = numero1 - numero2;
        } else if (operacao == '*'){
            resultado = numero1 * numero2;
        } else {
            resultado = numero1 / numero2;
        }        
        printf("%f %c %f = %f\n",numero1,operacao,numero2,resultado);

        printf("Deseja parar? (S para parar N para continuar)");
        scanf(" %c",&parar);
    }
    return 0;
}