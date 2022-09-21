#include <stdio.h>

int main(){
	
	int n, i = 0, hexadecimal[999]; //Declaramos nuestras variables a usar.
    
    printf("Ingresa un numero en sistema decimal: ");
    scanf("%i",&n);
    
     while (n!=0)
     {
           hexadecimal[i] = n%16; //Esta linea es para guardar el residuo del valor de n entre 16. En un arreglo.
           n = n /16; // Esta division es para modificar en valor de n en la proxima repeticion del while.
           i++; // Para moficicar el valor de i en el arreglo hexadecimal en la siguiente repeticion del while.
     }
    
	i--;
	printf("Resultado en Hexadecimal: ");
	 
     while (i>=0) //Este while se usa para imprimir los valores guardados en el arreglo hexadecimal.
     {
           switch(hexadecimal[i]) 
		   /*Este switch sirve evaluar los diferentes casos posibles, si el numero guardado en el arreglo
		    es 10,11,12,13,14 0 15, se imprimira la correspondiente letra para cada caso*/
           {
                             case 10:
                                  printf("A");
                             break;
                             case 11:
                                  printf("B");
                             break;
                             case 12:
                                  printf("C");
                             break;
                             case 13:
                                  printf("D");
                             break;
                             case 14:
                                  printf("E");
                             break;
                             case 15:
                                  printf("F");
                             break;
                             default:
                                   printf("%i",hexadecimal[i]); /*Si es un numero diferente del 10 al 15 
								   solamente pone lo que hay en el arreglo osea uno que va del 0 al 9.*/
                             break;
           } 
           i--;
     }
     printf("\n");
	return 0;
}