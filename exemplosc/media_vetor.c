#include <stdio.h>

int main(){
    float notas[5];
    notas[4] = 0;
    for (int i = 0; i < 4; i++){
        printf("Digite a nota %d:",i+1);
        scanf("%f",&notas[i]);
        notas[4] += notas[i];
    }
    notas[4] = notas[4] / 4;
    printf("Sua media = %.2f\n",notas[4]);
    return 0;
}