#include <stdio.h>
//hacer un programa que imprima el signo "*" el número de veces que sea indicado
void main(void)
{
    int iLimite;
    int iContador;
    printf("inique el numero de ''*'' que quira\n");
    scanf("%i", &iLimite);

    while (iLimite)
    {
        printf("*");
        iLimite--;
    }
    printf("\n fin\n");
}