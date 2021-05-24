struct vivienda
{
    float costo, altura;
    string direccion;
    int pisos, metros;
    bool vigilancia;
};
vivienda urbanizacion[15];

/* ---Costo en memoria---

CM(vivienda) = 2 + mp + 2 + 1 = 5 + mp 
CM(urbanizacion) = 75 + 75mp

---Cardinalidad---
card(vivienda) = 2^5 + 2^mp
card(urbanización) = (2^5 + 2^mp)^15 
                   = 2^30 + (2^mp)^15

---Formula de acceso---

urbanizacion[i].direccion = dirbase + i * (2^mp)^15 + 2
*/