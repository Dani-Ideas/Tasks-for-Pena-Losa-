/*
Objetivo: El alumno aplicará el uso de los especificadores de campo.
Deseamos crear un programa que cree el encabezado simple de un archivo BPM. Esta información debe
visualizarse en Hexadecimal.
*/
#include <stdio.h>

//const char bfType="BM";
int bfSize, bfReserved1,bfReserved2, bfOffBits;

int main(void)
{
    scanf("%d %d", &bfSize, &bfOffBits);
    bfReserved1 =0000, bfReserved2 = 0000;
    printf("BM%08X%04d%04d%08X", bfSize, bfReserved1, bfReserved2, bfOffBits);
    return 0;
}
