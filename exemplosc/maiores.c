#include <stdio.h>

int main(){
    int v1, v2, v3;
    printf("Digite o v1: ");
    scanf("%d",&v1);
    printf("Digite o v2: ");
    scanf("%d",&v2);
    printf("Digite o v3: ");
    scanf("%d",&v3);

    if ((v1 < v2) && (v1 < v3)){
        printf("%d ",v1);
        if (v2 < v3){
            printf("%d %d",v2,v3);
        }else{
            printf("%d %d",v3,v2);
        }
    }else if(v2 < v3){
        printf("%d ",v2);
        if (v1 < v3){
            printf("%d %d",v1,v3);
        }else{
            printf("%d %d",v3,v1);
        }
    }else{
        printf("%d ",v3);
        if (v1 < v2){
            printf("%d %d",v1,v2);
        }else{
            printf("%d %d",v2,v1);
        }
    }
    return 0;
}