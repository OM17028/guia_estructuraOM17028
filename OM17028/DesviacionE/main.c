#include <stdio.h>
#include <math.h>
int main() {
    int valor [10];
    int sumatoria = 0,tamanio=10;
    float media = 0;
    float varianza = 0.0;
    float desviacion= 0.0;
    printf("ingrese 10 numeros reales");
    for (int i = 0; i <tamanio ; ++i) {
        printf("ingrese el valor # %i ",i);
        printf("\n");
        scanf("%i",&valor[i]);
        sumatoria = sumatoria + valor[i];
    }
    media = sumatoria / 10;
    for(int i = 0 ; i < tamanio; i++){
        double rango;

        rango = pow((valor[i] - media), 2.0);

        varianza = varianza + rango;
    }
    varianza = varianza / (tamanio-1);
    desviacion = sqrt(varianza);

    printf("media %f ",media);
    printf("varianza %f ",varianza);
    printf("desviacion estandar %f ",desviacion);
}