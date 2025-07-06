//*Crear un programa que, al recibir como datos
//dos números enteros, calcule la suma, resta, 
//y multiplicación de dichos números.*/

#include <stdio.h>

int main(){
  int n1, n2, suma, resta, multiplicacion;

  printf("Ingrese el primer número: ");
  scanf("%i", &n1);

  printf("Ingrese el segundo número: ");
  scanf("%i", &n2);

  suma = n1 + n2;
  resta = n1 - n2;
  multiplicacion = n1 * n2;

  printf("suma: %i \n", suma);
  printf("resta: %i \n", resta);
  printf("multiplicación: %i", multiplicacion);
}
