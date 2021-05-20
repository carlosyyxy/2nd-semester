enum tipoMateria = {
    OBLIGATORIA,
    ELECTIVA,
    COMPLEMENTARIA,
    LABORATORIO
    };
struct fecha
{
    int dia, año;
    string mes;
};
struct evaluacion
{
    string nombre;
    fecha inicio, fin;
    float notaPromedio, notaMaxima;
    int numeroDeAprobados, numeroDeReprobados;
};
struct materia
{
    int codigo, numeroCreditos, semestre, notaMaxima;
    tipoMateria tipo;
    string nombre, descripcion;
    float notaPromedio;
    switch (nombre)
    {
    case "AYP":
        int horasLaboratorio;
        evaluacion evaluaciones[10];
        break;
    case "AYED":
        evaluacion evaluaciones[7];
        break;
    case "ICG":
        bool disponible;
        evaluacion evaluaciones[5];
        break;
    }
};
materia pensum[32];