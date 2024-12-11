#include <stdio.h>
#include "funciones.h"
int main (int argc, char *argv[]) {
    
    char frase[50];
    char palabra_mas_corta[50], palabra_mas_larga[50];
    int i = 0;
    int y = 0;
    
    printf("Ingrese la frase: \n");
    fgets(frase,50,stdin);

    contarpalabras(frase);
    VocalesyConsonantes(frase);
    palabramaspequenaymasgrande(frase, palabra_mas_corta, palabra_mas_larga, &i, &y);

    printf("La palabra más corta: %s, con %d letras\n", palabra_mas_corta, i);
    printf("La palabra más larga: %s, con %d letras\n", palabra_mas_larga, y);
    return 0;
}