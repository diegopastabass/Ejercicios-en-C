/* Escribe un programa que reciba un número entero 
 * del usuario e imprima si es par o impar */

#include <stdio.h>

int main(void) {
  int num;
  bool resultado;
  printf("Ingrese un número entero: ");
  scanf("%i", &num);
  if (num%2==0) {
    printf("%i es par");
  } else 
  {
    printf("%i es impar");
  }
}
