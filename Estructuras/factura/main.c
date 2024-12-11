#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    struct factura factura1;
    
    leerfactura(&factura1);
    imprimirfactura(&factura1);

    return 0;
}