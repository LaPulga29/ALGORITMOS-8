#include <stdio.h>

int main (int argc, char *argv[]) {

    float C = 0, altC = 0, diamC = 0, diametro = 0, altura = 0, PD, PA;
    char R;

    do
    {
        printf ("Ingrese el diametro (en centimetros): \n");
        printf (">> ");
        scanf ("%f", &diametro);
        printf ("Ingrese la altura (en centimetros): \n");
        printf (">> ");
        scanf ("%f", &altura);

        altC = altC + altura;
        diamC = diamC + diametro;
        C++;

        printf ("Quieres seguir registrando datos? (S = SI // N = NO) \n");
        printf (">> ");
        
        scanf (" %c", &R);
    
    } while ( R == 'S' || R == 's' );
    
    PD = diamC / C;
    PA = altC / C; 
    printf ("El promedio de diametro de los troncos es %.2f \n", PD);
    printf ("El promedio de altura de los troncos es %.2f \n", PA);

    return 0;
}