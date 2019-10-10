/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
    int edad=0,horasTra=0,notaExa=0,op1,op2,tiempoTr=0;
    printf("1. Empleado\n2. Postulante\n");
    printf("Escoja una opcion");
    scanf("%d",&op1);
    if(op1==1)
    {
    printf("Ingrese horas trabajadas");
    scanf("%d",&horasTra);
    printf("Ingrese la edad");
    scanf("%d",&edad);
    printf("1. hombre\n2. mujer\n");
    printf("Escoja una opcion");
    scanf("%d",&op2);
    if(horasTra>40)
       printf("Su sueldo será incrementado en $50");
       else if(tiempoTr>30 && op2==2||edad>25)
       printf("El sueldo se incrementará en $800.00");
       else
       printf("El sueldo se incrementará en $100.00");
    }
    else
        {
        printf("Ingrese la edad");
        scanf("%d",&edad);
        printf("Ingrese nota del examen");
        scanf("%d",&notaExa);
        if(edad>18 && notaExa>85)
           printf("Esta contratado");
        else
           printf("No a sido contratado");
    }
}