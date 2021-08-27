#include <stdio.h>

int main(){
    int horasTrabalhadas = 0;
    float valorHoraAula = 0.0, percentualDesconto = 0.0;

    printf("Digite as horas trabalhdas: \n");
    scanf("%d",&horasTrabalhadas);
    printf("Digite o valor da hora aula: \n");
    scanf("%f",&valorHoraAula);
    printf("Digite o percentual de desconto: \n");
    scanf("%f",&percentualDesconto);

    percentualDesconto = percentualDesconto / 100;

    float valorFinalBruto = 0.0,valorFinalLiquido = 0.0;
    valorFinalBruto = horasTrabalhadas * valorHoraAula;
    valorFinalLiquido = valorFinalBruto - (valorFinalBruto * percentualDesconto);

    printf("O valor liquido = %.2f\n",valorFinalLiquido);
    return 0;
}