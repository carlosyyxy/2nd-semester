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