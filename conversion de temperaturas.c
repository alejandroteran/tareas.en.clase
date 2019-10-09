/******************************************************************************
Realizar un programa en C que permita ingresar por teclado los grados Centigrados 
y Fahrenheit, y realice la coversion.
*******************************************************************************/
#include <stdio.h>//Definicion de biblioteca

void main()//Definicion de la funcion principal
{
    float centi, fahren, gradosC=0, gradosF=0;//Declaracion de variables
    int op;//Declaracion de variables
    printf("1. Grados Centigrados a Fahrenheit\n2. Grados Fahrenheit a Centigrados");//Salida en pantalla
    printf("\n.Escoja una opcion:");//Salida en pantalla
    scanf("%d",&op);//Lectura de la variable op
    if (op==1)//Si la variable cumple con esta condicion entonces
    {
        printf("Ingrese los Grados Centigrados:");//Salida en pantalla
        scanf("%f",&centi);//Lectura de la variable centi
        gradosF=((centi*9)/5)-32;//Proceso 
        printf("Grados Fahrenheit:%2.f\n",gradosF);//Salida en pantalla
    }
    else//Caso contrario
    {
        printf("Ingrese los Grados Fahrenheit:");//Salida en pantalla
        scanf("%f",&fahren);//Lectura de la variable faren
        gradosC=((fahren-32)*5)/9;//Proceso
        printf("Grados Centigrados:%2.f\n",gradosC);//Salida en pantalla
    }
}