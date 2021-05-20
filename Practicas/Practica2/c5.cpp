struct fecha
{
    int dia, año;
    string mes;
};
struct entradaDeDirectorio
{
    string nombre;
    fecha creacion;
    int tamañoDeArchivo, numeroDeArchivos;
    bool compartido;
};
entradaDeDirectorio directorio[365];
