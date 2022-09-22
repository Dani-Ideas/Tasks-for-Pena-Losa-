#include <stdio.h>

int heithPixels, withPixels, positionX1, positionX2, positionY1, positionY2;
float heithElemet, withElemet, positionXPer_cent, positionYPer_cent;

int main(void)
{
    //solicitar datos
    scanf_s("%d %d %f %f %f %f", &withPixels, &heithPixels, &positionXPer_cent, &positionYPer_cent, &withElemet, &heithElemet);
    //calcular cordenadas en X
    positionX1 = withPixels * positionXPer_cent;
    positionX2 = positionX1 + (withPixels*withElemet);
    //calcular cordenadas en Y
    positionY1 = heithPixels*positionYPer_cent;
    positionY2 = positionY1 + (heithPixels*heithElemet);
    //mostrar datos
    printf("%d %d  %.2f  %.2f  %.2f  %.2f %d %d %d %d", withPixels, heithPixels, positionXPer_cent, positionYPer_cent, withElemet, heithElemet, positionX1, positionY1, positionX2, positionY2);
    return 0;
}