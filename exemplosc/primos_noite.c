#include <stdio.h>

int main(){
    int lim =0;
    printf("Digite um numero para gerar primos: ");
    scanf("%d",&lim);

    for(int i = 2;i<lim;i++){
        int ePrimo = 1;
        printf("Vai fazer o for interno do i = %d\n",i);
        for(int j = 2;j < i;j++){
            int resto = i % j;
            printf("Fez interno resto = %d \n",resto);
            if (resto == 0){
                ePrimo = 0;
                
            }
        }
        printf("Acabou o interno do i = %d\n",i);
        if (ePrimo == 1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}