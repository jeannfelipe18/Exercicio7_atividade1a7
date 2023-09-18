#include<stdio.h>

main(){
    int contador = 0, numero = 3;

    while(contador < 5){
        if(numero % 3 == 0){
            printf("\n%d", numero);
            contador++;
        }
        numero++;
    }
}