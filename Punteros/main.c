#include <stdio.h>
#include "funciones.c"

int main (int argc, char *argv[]) {
    int nums[10];
    printf("Ingrese los 10 numeros");
    for (int i = 0; i < 10; i++) {
        do
        {
            printf("%d: ", i + 1);
            scanf("%d", &nums[i]);
        } while (nums[i]<0);
    }
    ordenarnums(nums, 10);

    float resultado_media = media(nums, 10);
    int resultado_moda = moda(nums, 10);
    float resultado_mediana = mediana(nums, 10);
    int resultado_menor = menor(nums, 10);
    int resultado_mayor = mayor(nums, 10);

    printf("Resultados:\n");
    printf("Media: %.2f\n", resultado_media);
    printf("Moda: %d\n", resultado_moda);
    printf("Mediana: %.2f\n", resultado_mediana);
    printf("Numero menor: %d\n", resultado_menor);
    printf("Numero mayor: %d\n", resultado_mayor);

    return 0;
}