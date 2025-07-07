/* Pide al usuario un número y muestra su tabla de multiplicar del 1 al 10. */

#include <stdio.h> 

int main(void) {
  int num, mult;
  printf("Ingrese un número entero: ");
  scanf("%i", &num);

  for(int i=0; i<=10 ; i++)
  {
    mult = num * i;
    printf ("El resultado de %i x %i es igual a %i\n", num, i, mult);
  }
}
