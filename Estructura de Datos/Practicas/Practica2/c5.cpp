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

CM(fecha) = 2 + mp;

CM(entradaDeDirectorio) = np + (2 + mp) + 3;
CM(entradaDeDirectorio) = 5 + mp + np;

CM(directorio) = (5 + mp + np) * 365;
CM(directorio) = 1825 + 365mp + 365np;

---Cardinalidad---
card(fecha) = 2^2 + 2^mp;

card(entradaDeDirectorio) = 2^np * (2^2 * 2^mp) * 2^3;
card(entradaDeDirectorio) = 2^5 * 2^mp * 2^np;

card(directorio) = (2^5 * 2^mp * 2^np) ^ 365;
card(directorio) = (2^1825 * (2^mp)^365 * (2^np)^365);

---Formula de acceso---

acceso de directorio[i].creacion.mes= dirbase + i * (2^1825 * (2^mp)^365 * (2^np)^365) + np + 2;

*/