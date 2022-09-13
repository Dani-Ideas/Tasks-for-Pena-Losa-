#include <stdio.h>

int heithPixels, withPixels; 
float heithElemet, withElemet, positionxInper_cent, positionyInper_cent;

void main() 
{
    scanf_s("%d %d",&withPixels, &heithPixels);
    //calcular las dimeciones del letrero
    heithElemet = heithPixels*0.5;
    withElemet = withPixels*0.1;
    //calcular la pocion en la que debde de emeger el 
    positionxInper_cent = (withPixels -withElemet-(withPixels*0.25))*100;
    positionyInper_cent = (heithPixels-heithElemet-(heithPixels*0.03))*100;
    
    //Mostar datos de salida
    printf("%d %d %f %f %f %f", withPixels, heithPixels, positionxInper_cent, positionyInper_cent, withElemet, heithElemet);
}