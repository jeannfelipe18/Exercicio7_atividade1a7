#include<stdio.h>

main(){

    int N;

    printf("Digite o numero inteiro: ");
    scanf("%d", &N);

    if(N < 0){
        printf("O numero inserido não é positivo");
    } else {
        for (int i = N; i >= 0; i--) {
            printf("%d\n", i);
        }
    }    
}