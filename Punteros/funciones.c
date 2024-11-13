#include <stdio.h>
#include "funciones.h"

//ordena el arreglo en orden ascendente
void ordenarnums(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Encuentra la media
float media(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return (float)suma / n;
}

//encuentra la mediana
float mediana(int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return arr[n / 2];
    }
}

//Encuentra la moda
int moda(int arr[], int n) {
    int max_count = 0, moda = arr[0], count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            if (count > max_count) {
                max_count = count;
                moda = arr[i - 1];
            }
            count = 1;
        }
    }

    if (count > max_count) {
        moda = arr[n - 1];
    }

    return moda;
}

//Encuentra el número mayor y menor de los 10 números ingresados
int menor(int arr[], int n) {
    return arr[0];
}

int mayor(int arr[], int n) {
    return arr[n - 1];
}