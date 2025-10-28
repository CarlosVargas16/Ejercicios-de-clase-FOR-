/* Vargas Rodriguez Carlos Antonio
ejercicio 5*/

#include <stdio.h>

void main ()
{
  int elem, acum=0;
  printf ("Dame el numero de elementos de la serie: ");
  scanf ("%d", &elem);
  
  for (int i=0; i<elem; i++)
  {
    acum=acum+5;
    printf ("%d, ", acum);
  }

  printf ("\n");
}

