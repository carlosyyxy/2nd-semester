enum sex = {
    FEMENINO,
    MASCULINO};
struct cancion
{
    string nombre, autor;
    int año;
};
struct cantante
{
    string nombre;
    char pais[9];
    cancion canciones[3];
    int puntos;
    sex sexo;
};
cantante concurso[25];