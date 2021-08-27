#include <stdio.h>

int main(){
    int n1=0,n2=0,n3=0,n4=0;
    float media=0.0;

    printf("Digite a primeira nota: ");
    scanf("%d",&n1);
    printf("Digite a segunda nota: ");
    scanf("%d",&n2);
    printf("Digite a terceira nota: ");
    scanf("%d",&n3);
    printf("Digite a quarta nota: ");
    scanf("%d",&n4);
    media = (n1+n2+n3+n4) / 4.0;
    return 0;
}