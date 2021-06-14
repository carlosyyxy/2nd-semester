struct vivienda
{
    float costo, altura;
    string direccion;
    int pisos, metros;
    bool vigilancia;
};
vivienda urbanizacion[15];

/* ---Costo en memoria---
    CM(vivienda) = 1 + 1 + mp + 1 + 1 +1;
    CM(vivienda) = 5 + mp;

    CM(urbanizacion) = 7 * (5 + mp);
    CM(urbanizacion) = 35mp + 7mp;

*/

/* ---Cardinalidad---
    card(vivienda) = 2 * 2 * 2^mp * 2 * 2 * 2;
    card(vivienda) = 2^5 + 2^mp;

    card(urbanizacion) = (2^5 + 2^mp)^15;
    card(urbanizacion) = (2^75 + 2^15mp)
*/

/* ---Formula de acceso---
    urbanizacion[i].direccion = i * (5 + mp) + 2
*/