#include <stdio.h>

int main(){
    int n1=0,n2=0,n3=0;

    printf("Digite o numero 1: ");
    scanf("%d",&n1);
    printf("Digite o numero 2: ");
    scanf("%d",&n2);
    printf("Digite o numero 3: ");
    scanf("%d",&n3);

    if (n1 > n2){
        if (n1 > n3){
            printf("Maior = %d \n",n1);
        }else{
            printf("Maior = %d \n",n3);
        }
    }else{
        if (n2 > n3){
            printf("Maior = %d \n",n2);
        }else{
            printf("Maior = %d \n",n3);
        }
    }

    if (n1 < n2){
        if (n1 < n3){
            printf("Menor = %d \n",n1);
        }else{
            printf("Menor = %d \n",n3);
        }
    }else{
        if (n2 < n3){
            printf("Menor = %d \n",n2);
        }else{
            printf("Menor = %d \n",n3);
        }
    }

    return 0;
}