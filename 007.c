/* En las olimpiadas de invierno el tiempo que realizan los aprticipantes
 * en la competencia de velocidad en pista se mide en minutos,
 * segundos y centésimas, la distancia que recorren se expresa en metros
 * Calcular la velocidad en kilometros por hora
 * */

#include <stdio.h>

int main() {
  float dis, min, seg, cen, tse, vms, vel;

  printf("Ingrese la distancia recorrida: ");
  scanf("%f", &dis);

  printf("Ingrese los minutos: ");
  scanf("%f", &min);

  printf("Ingrese los segundos: ");
  scanf("%f", &seg);

  printf("Ingrese las centésimas: ");
  scanf("%f", &cen);
  
  tse = min * 60 + seg + cen / 100;
  vms = dis/tse;
  vel = vms*3600/1000;

  printf("La velocidad en kilometros por hora es: %f", vel);

}
