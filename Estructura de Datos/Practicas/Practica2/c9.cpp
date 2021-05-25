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

/*---Costo en memoria---
CM(producto)= 1 + mp + np + 1 + 1 + 1 + op = 4 + mp + np + op
CM(almacen) = (4 + mp + np + op ) * 100 = 400 + 100mp + 100np + 100op;
CM(supermercado) = (400 + 100mp + 100np + 100op) * 10 = 4000 + 1000mp + 1000 np + 1000 op; 


---Cardinalidad---
card(producto) = 2^4 * 2^mp * 2^np * (2 + 2^op);
card(almacen) = (2^4 * 2^mp * 2^np * (2 + 2^op))^100
card(almacen) = 2^400 * (2^mp)^100 * (2^np)^100 * (2 + 2^op)^100;
card(supermercado) = (2^400 * (2^mp)^100 * (2^np)^100 * (2 + 2^op)^100)^10;
card(supermercado) = 2^4000 * (2^mp)^1000 * (2^np)^1000 * (2 + 2^op)^1000
*/