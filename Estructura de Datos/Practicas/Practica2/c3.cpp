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

/* ---Costo en memoria---

CM(sex) = 1;
CM(cancion) = mp + np + 1;

CM(cantante) = op + 9 + 2 * (mp + np + 1) + 1 + 2;
CM(cantante) = op + 14 * (mp + np + 1) ;
CM(cantante) = 15mp + 15np + 14 + op;

CM(concurso) = (15mp + 15np + 14 + op) * 25;
CM(concurso) = 375mp + 375np + 374 + 25op; 


---Cardinalidad---

card(sex) = 2;
card(Cancion) = 2^mp * 2^np * 2;

card(cantante) = 2^op * 2^9 * (2^mp * 2^np * 2)^3 * 2 * 2;
card(cantante) = 2^op * 2^11 * (6^mp * 6^np * 2^3);
card(cantante) = 2^14 * 2^op * 6^mp * 6^np


---Formula de acceso---

concurso[i].canciones[j].nombre = 

dirbase + i *(2^14 * 2^op * 6^mp * 6^np) + op + 9 + j * (mp + np + 1);

*/