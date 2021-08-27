#include <stdio.h>

int main(){
    int idade=0;
    printf("Digite a idade do atleta= ");
    scanf("%d",&idade);

    if (idade <= 8){
        printf("Infantil A\n");
    }else if (idade < 13){
        printf("Infantil B\n");
    }else if (idade < 18){
        printf("Juvenil A\n");
    }else if (idade < 21){
        printf("Juvenil B\n");
    }else if (idade >= 21){
        printf("Senior\n");
    }
    return 0;
}