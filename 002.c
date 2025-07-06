#include <stdio.h>

enum colores
{
  azul, amarillo, rojo, verde , blanco, negro
};

const char *nombre_color[] = {
  "azul", "amarillo", "rojo", "verde", "blanco", "negro"
};

int main (void)
{
  int tmp;
  printf("Ingresa un número para el color: ")
  fflush(stdout);
  if(scanf("%d", &tmp) !=1){
    fprintf((stderr, "Entrada inválida.\n");
    return 1;
  }

  if (tmp < azul || tmp > negro) {
    fprintf(stderr, "Fuera de rango. us 0-5.\n");
    return 1;
  }

  enum colores color = (enum colores)tmp;
  printf("El color es: %s\n", nombre_color[color]);

  return 0;
}
