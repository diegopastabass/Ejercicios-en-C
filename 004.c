//*Construye un programa que, al recibir como datos el costo
//de un artículo vendido y la cantidad de dinero entregada por 
//el cliente, calcule e imprima el vuelto*/ 

#include <stdio.h>

int main()
{
  int precio, dinero, vuelto;

  printf("Ingrese el valor del producto: ");
  scanf("%i", &precio);

  printf("Ingrese el dinero entregado por el cliente: ");
  scanf("%i", &dinero);

  vuelto = dinero - precio; 

  printf("El vuelto es: %i", vuelto);
}
