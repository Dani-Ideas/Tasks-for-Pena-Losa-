/*
Modifiquen el programa para que 
a) acepte apellidos compuestos como De la Cruz 
b) concatene todo el RFC como debe ser. 
c) asegúrese que la fecha es correcta bajo los siguientes criterios: el día tiene un valor entre 1 y 31, el
Mes tiene un valor entre 1 y 12 y el año es superior a 1920
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char letra;
    char nombre[20];
    char appP[30];
    char appM[30];
    char todo[100];
    char RFC[10];
    int dia, mes, anio;
    char sanio[5];

    
    printf("Nombre: "); 
    //scanf_s("%s", nombre, 20);
    gets_s(nombre);
    printf("Paterno: "); scanf_s("%s", appP, 30);
    printf("Materno: "); scanf_s("%s", appM, 30);
    strcpy_s(todo,20, nombre);
    strcat_s(todo, 30, appP);
    strcat_s(todo, 30, appM);

    RFC[0] = toupper(appP[0]);
    RFC[1] = toupper(appP[1]);
    RFC[2] = toupper(appM[0]);
    RFC[3] = toupper(nombre[0]);
    RFC[6] = '\0';


    printf("Dia: "); scanf_s("%i", &dia);
    printf("Mes: "); scanf_s("%i", &mes);
    printf("Año: "); scanf_s("%i", &anio);
    sprintf_s(sanio, "%4i", anio);
    RFC[4] = sanio[2];
    RFC[5] = sanio[3];
    int numero = atoi(sanio);
    printf("EL RFC ES %s%02i%02i", RFC, mes, dia);
    printf("numero: %i", numero);
    printf("sanio %i", isdigit(sanio[0]));
    printf("nombre %i", isdigit(nombre[0]));
    printf("\n%s", todo);
    
}