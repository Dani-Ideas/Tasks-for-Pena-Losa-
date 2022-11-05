#include <stdio.h>
//hacer un programa que imprima el signo "*" el número de veces que sea indicado
void main(void)
{
    int iLimite;
    int iContador;
    printf("Limite\n");
    scanf("%i", &iLimite);
    iContador=0;

    while (iContador < iLimite)
    {
        printf("*");
        iContador= iContador +1;
    }
    printf("\n Fin\n");
}