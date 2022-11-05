#include <stdio.h>
//hacer un programa que imprima el signo "*" el número de veces que sea indicado
void main(void)
{
    int iLimite, iContador, continuar=1;
    
    while (continuar)
    {
        iContador=0;
        printf("Limite\n");
        scanf("%i", &iLimite);
        while (iContador < iLimite)
        {
            printf("*");
            iContador= iContador +1;
        }
        printf("¿Se te ocurre otro numero?\nSí= cualquier tecla, No=0\n");
        scanf("%i", &continuar);
    }
    
    
    printf("\n Fin\n");
}