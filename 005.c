/*
 *
* Construye un programa que al recibir como dato el radio de un círculo,
* calcule e imprima tanto su área como la longitud de su ciorcunferencia.
*
*/ 

#include <stdio.h>
#include <math.h>

int main() {
  
  float radio, area, longitud;

  printf("Ingrese el radio de un circulo en metros: ");
  
  scanf("%f", &radio);

  area = M_PI * pow(radio, 2);

  longitud = 2 * M_PI * radio;

  printf("El valor del area es: %f m² \n", area);
  printf("El valor de la longitud de la circunferencia es: %f m", longitud);

}
