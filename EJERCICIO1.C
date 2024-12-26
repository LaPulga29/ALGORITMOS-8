#include <stdio.h>
int main() {
    int n, pares = 0, impares = 0;

    printf("Ingresa numeros aleatorios, uno por uno (Ingrese un negativo para terminar): \n");

    do {
        printf("Numero: ");
        scanf("%d", &n);

        if ( n > 0 ) {
            if ( n % 2 == 0 ) {
                pares = pares + 1;
            } else {
                impares = impares + 1;
            }
        }
    } while ( n >= 0 );

    printf("Total de numeros pares: %d \n", pares);
    printf("Total de numeros impares: %d \n", impares);

    return 0;
}
