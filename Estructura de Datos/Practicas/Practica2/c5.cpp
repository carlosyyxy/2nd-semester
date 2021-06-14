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

/* ---Costo en memoria---

CM(fecha) = 2 + mp

CM(entradaDeDirectorio) = np + (2 + mp) + 1 + 1 + 1
CM(entradaDeDirectorio) = np + mp + 5

CM(directorio) = (np + mp + 5) * 365
CM(directorio) = 365np + 365mp + 1825
*/

/* ---Cardinalidad---
card(fecha) = 2 * 2 * 2^mp 
card(fecha) = 2^2 * mp;

card(entradaDeDirectorio) = 2^np * (2^2 * 2^mp) * 2 * 2 * 2
card(entradaDeDirectorio) = 2^np * (2^2 * 2^mp) * 2^3;
card(entradaDeDirectorio) = 2^np * 2^mp * 2^5;

                            
card(directorio) = (2^np * 2^mp * 2^5)^365;
card(directorio) = (2^365np * 2^365mp * 2^1825)
*/

/* ---Formula de acceso---

acceso de directorio[i].creacion.mes= 
dirbase + i * (2^np * 2^mp * 2^5) + np + 2;

*/