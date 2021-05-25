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
CM(evaluacion) = np + (2+mp) * 2 + 4 = np + 8 + 2mp;
CM(materia) = 2*op + qp + 10np + 87 + 20mp;
CM(pensum) = (2*op + qp + 10np + 87 + 20mp) * 32;
CM(pensum) = 64*op + 32qp + 320np + 2784 + 640mp; 

---Cardinalidad---
card(tipoMateria) = 4;   
card(fecha) = 2^2 + 2^mp;  
card(evaluacion) = 2^np * (2^2 * 2^mp)^2 * 2^4 = 2^8 * 2^mp^2 * 2^np
card(materia) = 
2^7 * 4^op * 2^qp * ((2 * (2^80 * 2^mp^20 * 2^np0)) +( 2^56 * 2^mp^14 * (2^np)^7) + (2^40 * 2^mp^10 * (2^np)^5) )
card(pensum) = (2^7 * 4^op * 2^qp * ((2 * (2^80 * 2^mp^20 * 2^np0)) +( 2^56 * 2^mp^14 * (2^np)^7) + (2^40 * 2^mp^10 * (2^np)^5) )^32)     
*/