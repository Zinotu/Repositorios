#include <stdio.h>
#include "funciones.h"

void contarpalabras (char frase[50]){
    int cont= 1;
    for (int i = 0; i < 50; i++)
    {
        if (frase[i]==' ')
        {
            cont++;
        }
        
    }
    printf("El numero de palabras es: %d\n", cont);
}

void VocalesyConsonantes(char frase[50]){
    int vocales=0;
    int consonantes=0;
    for (int i = 0; i < 50; i++)
    {
        if (frase[i]=='a'|| frase[i]=='A'||frase[i]=='e'|| frase[i]=='E'||frase[i]=='i'|| frase[i]=='I'||frase[i]=='o'|| frase[i]=='O'||frase[i]=='u'|| frase[i]=='U')
        {
            vocales++;
        }else if (frase[i]!=' ')
        {
            consonantes++;
        }else if (frase[i]=='\n')
        {
            break;
        }
        
    }
    printf("El numero de vocales en la frase es de: %d\n",vocales);
    printf("El numero de consonantes en la frase es de: %d\n",consonantes);    
}

void palabramaspequenaymasgrande(char frase[50], char palabra_mas_corta[], char palabra_mas_larga[], int *h, int *p) {
    int i = 0;
    int longitud_actual = 0;
    int longitud_corta = 50, longitud_larga = 0;
    int inicio_palabra = -1;
    int fin_palabra;
    
   
    *h = 0;  
    *p = 0;  
    
    while (frase[i] != '\0') {
        if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z')) {
            if (inicio_palabra == -1) {
                inicio_palabra = i;  
            }
            longitud_actual++;
        } else if (longitud_actual > 0) {
            fin_palabra = i;

            int longitud_palabra = fin_palabra - inicio_palabra;
            

            if (longitud_palabra < longitud_corta) {
                longitud_corta = longitud_palabra;
                *h = longitud_corta;  
                int j;
                for (j = 0; j < longitud_palabra; j++) {
                    palabra_mas_corta[j] = frase[inicio_palabra + j];
                }
                palabra_mas_corta[longitud_palabra] = '\0';
            }
            
            if (longitud_palabra > longitud_larga) {
                longitud_larga = longitud_palabra;
                *p = longitud_larga; 
                int j;
                for (j = 0; j < longitud_palabra; j++) {
                    palabra_mas_larga[j] = frase[inicio_palabra + j];
                }
                palabra_mas_larga[longitud_palabra] = '\0';
            }
            
            longitud_actual = 0;
            inicio_palabra = -1;
        }
        i++;
    }


    if (longitud_actual > 0) {
        fin_palabra = i;
        int longitud_palabra = fin_palabra - inicio_palabra;
        
        if (longitud_palabra < longitud_corta) {
            longitud_corta = longitud_palabra;
            *h = longitud_corta;  
            int j;
            for (j = 0; j < longitud_palabra; j++) {
                palabra_mas_corta[j] = frase[inicio_palabra + j];
            }
            palabra_mas_corta[longitud_palabra] = '\0';
        }

        if (longitud_palabra > longitud_larga) {
            longitud_larga = longitud_palabra;
            *p = longitud_larga;  
            int j;
            for (j = 0; j < longitud_palabra; j++) {
                palabra_mas_larga[j] = frase[inicio_palabra + j];
            }
            palabra_mas_larga[longitud_palabra] = '\0';
        }
    }
}