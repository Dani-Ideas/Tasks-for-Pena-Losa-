#include <stdio.h>

int heithPixels, withPixels; 
float heithElemet, withElemet, positionX, positionY;

void main() 
{
    scanf("%d %d",&withPixels,&heithPixels);
    //calcular las dimeciones del letrero
    heithElemet = heithPixels*0.1;
    withElemet = withPixels*0.5;
    //calcular la pocion en la que debde de emeger el elemento
    positionX = (withPixels -withElemet-(withPixels*0.25));
    positionY = (heithPixels-heithElemet-(heithPixels*0.78));
    //mostrar datos
    printf("%d %d %f %f %f %f", withPixels, heithPixels, positionX, positionY, withElemet, heithElemet);
}