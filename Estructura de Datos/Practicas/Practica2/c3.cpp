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

CM(cantante) = op + 9 + (3 * (mp + np + + 1)) + 1 + 1;
CM(cantante) = op + 11 + 3mp + 3np + 3;
CM(cantante) = 14 + 3mp + 3np + op;

CM(concurso) ((14+3mp+3np+ op) * 25) = 350 + 75mp + 75np + 25op; */

/* ---Cardinalidad---

card(sex) = 2;
card(Cancion) = 2^mp * 2^np * 2;

card(cantante) = 2^op * 2^9 * (2^(mp * np * 2)^3) * 2 * 2;
card(cantante) = 2^op * 2^11 * (2 ^ 3mp * 3np * 6);

card(concurso) = 2 ^ ((2^op * 2^11 * 2 ^ (3mp * 3np * 6))^25)
card(concurso) = 2 ^ (2^25op * 2^275 * 2 ^(75mp * 75np * 150))

*/

/* ---Formula de acceso---

concurso[i].canciones[j].nombre = 

dirbase + i * (14+3mp+3np+ op) + 1 + mp + np + 1 + j * (mp + np + 1);

*/