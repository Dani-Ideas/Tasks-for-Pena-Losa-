#include <stdio.h>
//hacer un programa que imprima el signo "*" el número de veces que sea indicado
void main(void)
{
    int iLimite, iFilas,iColumnas, continuar=1;
    
    while (continuar)
    {
        iFilas=iColumnas=0;
        printf("Limite\n");
        scanf("%i", &iLimite);
        while (iFilas < iLimite)
        {
            while (iColumnas < iLimite)
            {
                printf("* ");
                iColumnas= iColumnas +1;
            }
            iColumnas=0;
            printf("\n");
            iFilas= iFilas+1;
        }
        printf("¿Se te ocurre otro numero?\nSí= cualquier tecla, No=0\n");
        scanf("%i", &continuar);
    }
    
    
    printf("\n Fin\n");
}