struct producto
{
    char nombre[50];
    double precio;
    int cantidad;
};


struct factura
{
    char nombre[20];
    int cedula;
    double total;
    struct producto productos[5];
};

void leerfactura(struct factura *factura);
void imprimirfactura (struct factura *factura);