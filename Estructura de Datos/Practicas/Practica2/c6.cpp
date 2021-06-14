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

/*---Costo en memoria---
CM(tipoMateria)=1;
CM(fecha) = 2 + mp;

CM(evaluacion) = np + ((2+mp) * 2) + 4 
CM(evaluacion) = np + 8 + 2mp;

CM(materia) = 6 + op + qp + 1 + 1 + (10 * (np + 8 + 2mp));
CM(materia) = 6 + op + qp + 1 + 1+ 10np + 80 + 20mp;
CM(materia) = 88 + 20mp + 10np + op + oq;


CM(pensum) = (2*op + qp + 10np + 87 + 20mp) * 32;
CM(pensum) = 64*op + 32qp + 320np + 2784 + 640mp;  

*/

/* ---Cardinalidad---
card(tipomateria) = 4;

card(fecha) = 2 * 2 * 2^mp;
card(fecha) = 2^2 * 2^mp;


card(evaluacion) = 2^np * 2 * 2^2 * 2^mp * 2^2 * 2^mp * 2^4;
card(evaluacion) = 2^np * 2^9 * 2^2mp;

card(materia) = 2^4 * 2^4 * 2^op * 2^qp * 2 * (2 + (2^np * 2^9 * 2^2mp)^10  + (2^np * 2^9 * 2^2mp)^7 + 2 + (2^np * 2^9 * 2^2mp)^5)
card(materia) = 2^9 * 2^op * 2^qp * (2 + (2^np * 2^9 * 2^2mp)^10  + (2^np * 2^9 * 2^2mp)^7 + 2 + (2^np * 2^9 * 2^2mp)^5):
card(pensum) = (2^9 * 2^op * 2^qp * (2 + (2^np * 2^9 * 2^2mp)^10  + (2^np * 2^9 * 2^2mp)^7 + 2 + (2^np * 2^9 * 2^2mp)^5)^32):


*/