#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, resultado;

    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    resultado = num%2;

    if(resultado == 0){
        printf("O número é PAR.\n");
    } else {
        printf("O número é IMPAR.\n");
    }

    return 0;
}
