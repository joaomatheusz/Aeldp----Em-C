#include <stdio.h>
#include <stdlib.h>

int main(){
    double gasolina, distancia, taxa;
    
    printf("Informe os litros consumidos: ");
    scanf("%lf", gasolina);
    printf("Informe a distância percorrida em KM: ");
    scanf("%lf", distancia);
    
    taxa = distancia/gasolina;

    printf("---------------------------\n");
    printf("A taxa de Km/L neste caso é: %lf\n\n", taxa);

    return 0;

}