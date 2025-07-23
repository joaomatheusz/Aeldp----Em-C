#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano, mes, dia;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    printf("Informe o mes: ");
    scanf("%d", &mes);

    printf("Informe o dia: ");
    scanf("%d", &dia);

    if(dia > 31 || mes > 12 || ano < 1900){
        printf("Data inválida, insira novamente.\n");
    }

    printf("-------------------------------\n");

    printf("Data antes da conversão: %04d/%02d/%02d\n", ano, mes, dia);
    printf("Data depois da conversão: %02d/%02d/%04d\n", dia, mes, ano);


}