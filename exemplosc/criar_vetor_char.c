#include <stdio.h>

int main(){
    //Cria as variaveis para o problema
    int numero=0,centena=0,dezena=0;
    char vetorNumero[3],teste;
    //Le o numero
    printf("Digite o numero de 3 algarismos: ");
    scanf("%d",&numero);
    //Faz a divisao inteira - Pega centena
    centena = numero / 100;
    //Remove a centena do numero digitado
    numero = numero - (centena * 100);
    //Faz a divisao inteira - Pega dezena
    dezena = numero / 10;
    //Remove a dezena do numero digitado
    numero = numero - (dezena * 10);
    //Imprime resultado
    vetorNumero[0] = centena + '0';
    vetorNumero[1] = dezena + '0';
    vetorNumero[2] = numero + '0';
   printf(
        "Centena = %c Dezena = %c Unidade = %c \n",
        vetorNumero[0],vetorNumero[1],vetorNumero[2]
    );
 
    return 0;
}