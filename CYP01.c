#include <stdio.h>

int heithPixels, withPixels; 
float heithElemet, withElemet, positionxInper_cent, positionyInper_cent;

int main(heithPixels, withPixels)//poible a cambiar (&heithPixels, &withPixels)
/*en esta parte no se si lo tengo que modoficar para
 que los datos que reciva los identifique como 
 heithPixels, withPixels respectivamente*/ 
{
    //calcular las dimeciones del letrero
    heithElemet = heithPixels*0.5;
    withElemet = withPixels*0.1;
    //calcular la pocion en la que debde de emeger el 
    positionxInper_cent = (withPixels -withElemet-(withPixels*0.25))100;
    positionyInper_cent = (heithPixels-heithElemet-(heithPixels*0.03))100;
    //Mostar datos de salida
    printf("%d %d %f %f %f %f", withPixels, heithPixels, positionxInper_cent, positionyInper_cent, withElemet, heithElemet);
}