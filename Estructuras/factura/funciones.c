#include <stdio.h>
#include "funciones.h"

void leerfactura(struct factura *factura){
    double total1=0;
    printf("Ingrese el nombre del cluente: ");
    fgets(factura->nombre,20,stdin);
    printf("Ingrese el numero de cedula: ");
    scanf("%d",&factura->cedula);
    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese el nombre del producto %d: ",i+1);
        fflush(stdin);
        fgets(factura->productos[i].nombre,50,stdin);
        printf("Ingrese el precio: ");
        scanf("%lf",&factura->productos[i].precio);
        printf("Ingrese la cantidad de productos: ");
        scanf("%d",&factura->productos[i].cantidad);
        total1+= factura->productos[i].cantidad * factura->productos[i].precio;
    }
    factura->total=total1;
}

void imprimirfactura (struct factura *factura){
    printf("El nombre es: %s\n",factura->nombre);
    printf("La cedula es: %d\n",factura->cedula);
    printf("Los productos son:\n");
    printf("Nombre\t\tCantidad\t\tPrecio\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\t\t%d\t\t%.2lf\n",factura->productos[i].nombre,
                                    factura->productos[i].cantidad,
                                    factura->productos[i].precio);
    }
    printf("El total de la factura es: %.2lf\n", factura->total);
}