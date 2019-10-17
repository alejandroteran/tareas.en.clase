/******************************************************************************
realizar un programa en C que determine el factorial de un numero con la sentencia
WHILE 
Alejandro Teran
*******************************************************************************/
#include <stdio.h>
void main()
{
    int cont = 1, resultado = 1, numero;
    printf("Número que desea sacar su factorial?\n");
    scanf("%i", &numero);
    while(cont <= numero);
    {
        resultado = resultado * cont;
        cont++;
    }
    
    printf("El factorial de %i es: %i\n", numero, resultado);
    
}
