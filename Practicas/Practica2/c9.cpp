struct producto
{
    int codigo;
    string nombre, descripcion;
    float costo;
    bool tipo;
    switch (tipo)
    {
    case true:
        float iva;
        break;
    case false:
        string descripcion;
        break;
    }
};
typedef producto almacen[100];
almacen supermercado[10];