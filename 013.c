/* Crear un arbol de asteriscos como el siguiente 
*      *
*     ***
*    *****
*   *******
*  *********
*  
*  */

#include <stdio.h>
#include <string.h>

int main(void) {
    int altura = 6;
    
    for (int i = 0; i < altura; i++) {
        // Imprimir espacios
        for (int j = 0; j < altura - i - 1; j++) {
            printf(" ");
        }
        // Imprimir asteriscos
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
