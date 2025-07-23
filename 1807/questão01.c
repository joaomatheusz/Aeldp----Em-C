#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("\n\n");
    printf("Informe o dia do mes: ");
    scanf("%d", &dia);

    printf("Informe o mes do ano: ");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if(dia > 31 || mes > 12 || ano < 1900){
        printf("Data inválida, insira novamente.\n");

        return 1;
    }

    printf("-------------------------\n");

    printf("A sua data formatada é: %02d/%02d/%04d\n\n", dia,mes,ano);

    
}