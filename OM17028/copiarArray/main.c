#include <stdio.h>

int main() {
    int tamanio=0,aux;
    printf("de que tamanio desea el arreglo a copiar \n");
    scanf("%i",&tamanio);
    int vector1[tamanio];
    int vector2[tamanio];
    for (int i = 0; i <tamanio ; ++i) {
        printf("ingrese el valor # %i",i);
printf("\n");
        scanf("%i",&vector1[i]);
    }

    for (int j = 0; j <tamanio ; ++j) {
        vector2[j]=vector1[j];
    }
printf("se copiaron todos los datos al segundo vector");
    printf("\n");
    printf("VECTOR 2");
    printf("\n");
    for (int i = 0; i <tamanio ; ++i) {
        printf("%i",vector2[i]);
        printf("\n");
    }

    return 0;
}