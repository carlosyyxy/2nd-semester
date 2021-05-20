struct persona
{
    char nombre[50], direccionTrabajo[100], rif[15];
    bool estadoCivil, sexo;
    int edad, ci;
};
typedef persona juntaCondominio[10];
struct edificio
{
    char nombre[50], direccion[101];
    int cantidadApartamentos;
    juntaCondominio junta;
};
edificio avenida[25];