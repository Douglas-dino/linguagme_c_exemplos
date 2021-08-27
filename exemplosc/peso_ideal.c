#include <stdio.h>

int main(){
    float alt=0.0;
    char sexo;
    printf("Digite o sexo (M ou F): ");
    scanf("%c",&sexo);
    printf("Digite a altura: ");
    scanf("%f",&alt);
    float pI = 0.0;
    switch(sexo){
        case 'M':
            pI = (72.7 * alt) - 58;
            break;
        case 'F':
            pI = (62.1 * alt) - 44.7;
            break;
    }
    printf("O peso ideal e %.2f\n",pI);
    return 0;
}