#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade: ");
    scanf("%d",&idade);

    if (idade >= 18){
        printf("Pode dirigir e votar\n");
    }else if(idade >= 16){
        printf("Pode votar\n");
    }else{
        printf("Nao pode fazer nada\n");
    }
    return 0;
}