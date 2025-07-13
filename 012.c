/* Escribe un programa que pida al usuario una cadena 
 * (palabra o frase corta) y la imprima al revés. 
 * (Pista: usa un arreglo de char) */

#include <stdio.h>

int main(void) {
  char palabra[];
  printf("Ingrese una frase, palabra o texto corto:");
  scanf("%c", &palabra);
  printf("%i", sizeof(palabra));
  for(int i=0; i < 5 ;i++)
  {
    printf("%c", palabra[i]);
  }
}
