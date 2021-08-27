#include <stdio.h>

int main(){
    float s=0.0;
    int i = 1,n = 0;

    printf("Digite o valor de N: ");
    scanf("%d",&n);

    if (n > 0){
        while(i <= n){
            s = s + (1.0/i);
            i = i + 1; //ou i += 1 ou i++
        }
        printf("Valor de s = %f\n",s);
    }else{
        printf("N deve ser maior que 0\n");
    }
}