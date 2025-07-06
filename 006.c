//* En una casa de cambio necesitan construir un proigrama tal que al 
//  dar como dato una cantidad expresada en dólares, convierta esa 
//  cantidad a pesos chilenos.
// */     


#include <stdio.h>

int main()
{
  float dinero, conversion, preciodolar;

  printf("Ingrese el precio del dolar en pesos: ");
  scanf("%f", &preciodolar);
  
  printf("Ingrese la cantidad de dinero en dólares: ");
  scanf("%f", &dinero);

  conversion = dinero * preciodolar;

  printf("La conversion a pesos chilenos es: %f", conversion);
}
