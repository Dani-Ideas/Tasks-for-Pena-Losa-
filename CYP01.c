#include <stdio.h>

int heithPixels, withPixels;
float heithElemet, withElemet, positionX, positionY;

int main()
{
    scanf_s("%d %d", &withPixels, &heithPixels);
    //calcular las dimeciones del letrero
    heithElemet = heithPixels * 0.1;
    withElemet = withPixels * 0.5;
    //calcular la pocion en la que debe de emeger el elemento
    positionX = (withPixels - withElemet - (withPixels * 0.25));
    positionY = (heithPixels - heithElemet - (heithPixels * 0.78));
    return 0;
    
    //Mostar datos de salida
    //printf("%d %d %.2f %.2f %.2f %.2f", withPixels, heithPixels, positionx_Inper_cent, positiony_Inper_cent, withElemet, heithElemet);
}