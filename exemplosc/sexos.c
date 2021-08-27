#include <stdio.h>

int main(){
    char sexo;
    printf("Digite o sexo da pessoa: ");
    scanf(" %c",&sexo);
    if ((sexo == 'F') || (sexo == 'M')){
        printf("Sexo valido!!!!!\n");
    }else{
        printf("Sexo desconhecido!!!!!\n");
    }
    return 0;
}