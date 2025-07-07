/* Escribe un programa que lea números enteros del usuario hasta que este 
 * ingrese un cero. Al final, imprime la suma total de los números ingresados.*/ 

#include <stdio.h> 

int main(void) {
  int sum, num;
  bool respuesta = true;

  printf("Ingrese un número entero: ");
  scanf("%i", &num);
  sum = sum + num;
  while(respuesta != false) {    
    if (num != 0)
    {
      printf("Ingrese un número entero: ");
      scanf("%i", &num);
      sum = num + sum;
    } else 
    {
      respuesta = false;
    }
  }
  printf("El total es %i", sum);
}
