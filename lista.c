#include <stdio.h>
#include <string.h>
#include <stdlib.h>
     
    struct persona
    {
        char nombre[30];
        int edad;
        int telefono;
        char poblacion[40];
    } cadena[30];
 
 
int main ()
{   
    int i;
    FILE *doc;
    doc = fopen( "dataBase", "wt" );
     
     
    for (i=1;i<=30;i++) {
        printf("Escribe el nombre:  ");
        scanf("%s", cadena[30].nombre);
        printf("El nombre es: %s \n", cadena[30].nombre);
        fprintf (doc, "%s \n" ,cadena[30].nombre);
      
        printf("Escribe la edad: ");
        scanf("%d", &cadena[30].edad);
        printf("La edad es: %d \n", cadena[30].edad);
        fprintf(doc,"%d \n" ,cadena[30].edad);
 
        printf("Escribe el telefono:  ");
        scanf("%d", &cadena[30].telefono);
        printf("El telefono es: %d \n", cadena[30].telefono);
        fprintf(doc, "%d \n" ,cadena[30].telefono);
 
        printf("Escribe la población:  ");
        scanf("%s", cadena[30].poblacion);
        printf("La poblacion es: %s \n", cadena[30].poblacion);
        fprintf(doc,"%s \n" ,cadena[30].poblacion);
 
        }
     
        fclose (doc);
 
return 0;
}   
