#include <stdio.h>

int main(){
    int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
    printf("Digite o primeiro digito:\n");
    scanf("%d",&d1);
    printf("Digite o segundo digito:\n");
    scanf("%d",&d2);
    printf("Digite o terceiro digito:\n");
    scanf("%d",&d3);
    printf("Digite o quarto digito:\n");
    scanf("%d",&d4);
    printf("Digite o quinto digito:\n");
    scanf("%d",&d5);
    printf("Digite o sexto digito:\n");
    scanf("%d",&d6);
    printf("Digite o setimo digito:\n");
    scanf("%d",&d7);
    printf("Digite o oitavo digito:\n");
    scanf("%d",&d8);
    printf("Digite o nono digito:\n");
    scanf("%d",&d9);

    int dv1=0;
    dv1 = d1*10 + d2*9 + d3*8 + d4*7 + d5*6 + d6*5 + d7*4 + 
          d8*3 + d9*2;
    dv1 = (dv1 * 10) % 11;

    int dv2=0;
    dv2 = d1*11 + d2*10 + d3*9 + d4*8 + d5*7 + d6*6 + d7*5 + 
          d8*4 + d9*3 + dv1*2;
    dv2 = (dv2 * 10) % 11;

    printf("Os digitos verificadores para o CPF sao =%d %d\n",dv1,dv2);

    return 0;
}