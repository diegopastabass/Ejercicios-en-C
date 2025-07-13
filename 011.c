/* Crea un arreglo de 5 enteros. Pide al usuario que ingrese 
 * los valores, y luego muestra el promedio. */

#include <stdio.h>

int suma(int nums[], int sum)
{
  for (int i = 0; i < 5; i++) {
    sum = nums[i] + sum;
  }
  return sum;
}

int main() {
  
  int nums[5];
  int sum;
  float prom;
  for(int i=0; i<5 ;i++)
  {
    printf("Ingrese un número entero: ");
    scanf("%i", &nums[i]);
  }

  prom = suma(nums, sum) / 5;
  
  printf("El promedio de los números ingresados es %f", prom);
}

