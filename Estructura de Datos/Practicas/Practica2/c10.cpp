struct futbolista
{
    string nombre, nacionalidad;
    int edad;
    float salario;
    switch (nombre)
    {
    case "Messi":
        bool balonDeOro;
        float agilidad;
        break;
    case "Ronaldo":
        bool campeonLiga;
        float salto, potencia;
        break;
    case "Mbappe":
        bool balonDeOroSub21;
        float velocidad;
        break;
    }
};
struct estadio
{
    string nombre;
    int antigüedad;
    float valor;
    bool catedral;
};
struct equipo
{
    string nombre;
    int antigüedad, copas;
    futbolista jugadores[23];
    estadio campo;
    switch (nombre)
    {
    case "Barcelona":
        int bajas, altas;
        break;
    case "RealMadrid":
        futbolista fichajes[8];
        break;
    case "Valencia":
        bool campeonCopa;
        break;
    }
};
equipo laLiga[30];
/*---Costo en memoria---
CM(futbolista)=mp + np + 3 + 3 =mp + 6
CM(estadio) = op + 3
CM(equipo) = qp + 23mp + 138 + 8*mp 
CM(laLiga) = (qp + 23mp + 138 + 8*mp) * 30;
CM(laLiga) = 30qp + 690mp + 4140 + 240mp; */

/*---Cardinalidad---
card(futbolista) = 2^mp + 2^np + 2^6;
card(estadio) = 2^op + 2^3;
card(equipo) = 2^qp * 2^2 * ((2^mp)^23 + (2^np)^23 + 2^138) * 4^op + 2^5 * (2^2 + 2 + ((2^mp)^8 * (2^np)^8 * 2^48))
card(laliga) = card(equipo)^30;

*/