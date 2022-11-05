#include <stdio.h>
unsigned int numeroTotalCalificasiones, iContador1;
void main ()
{
    float calif[numeroTotalCalificasiones];
    printf("¿Cúantas calificasiones son en total?\n");
    scanf("%i", &numeroTotalCalificasiones);
    iContador1=0;
    while (iContador1<numeroTotalCalificasiones)
    {
        printf("\nCalificasion %i:", iContador1+1);
        scanf("%f", &calif[iContador1]);
        iContador1++;
    }
    int iContador2=0;
    float sumatoria;
    while (iContador2<numeroTotalCalificasiones)
    {
        sumatoria= sumatoria + calif[iContador2];
        iContador2++;
    }
    float promedio= sumatoria/numeroTotalCalificasiones;
    printf("El promedio de la calificasion es: %.2f\n", promedio);
}