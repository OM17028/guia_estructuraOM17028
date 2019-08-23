#include <stdio.h>

int main() {
 int tamanio=6,deletePos;
 int vector[]={1,7,3,8,9,3};
    for (int i = 0; i <tamanio ; ++i) {
        printf("la posicion # %i",i);
        printf(" tiene el valor de: %i",vector[i]);
        printf("\n");
    }
    printf("Que posicion desea eliminar \n");
    scanf("%i",&deletePos);



        for(int i= deletePos; i<tamanio-1; i+=1){
            vector[i]= vector[i+1];
        }
        tamanio-=1;
    for (int i = 0; i <tamanio ; ++i) {
        printf("la posicion # %i",i);
        printf(" tiene el valor de: %i",vector[i]);
        printf("\n");
    }
}